class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int, vector<pair<int, double>>> graph;
        for (int i = 0; i < edges.size(); ++i) {
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];
            graph[u].push_back({v, prob});
            graph[v].push_back({u, prob}); 
        }

        vector<double> maxProb(n, 0.0);
        maxProb[start_node] = 1.0;
        priority_queue<pair<double, int>> pq;
        pq.push({1.0, start_node}); 

        while (!pq.empty()) {
            double curr_prob = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (node == end_node) {
                return curr_prob;
            }

            for (auto& neighbor : graph[node]) {
                int next_node = neighbor.first;
                double next_prob = neighbor.second;
                double new_prob = curr_prob * next_prob;

                if (new_prob > maxProb[next_node]) {
                    maxProb[next_node] = new_prob;
                    pq.push({new_prob, next_node});
                }
            }
        }

        return 0.0;
    }
};
