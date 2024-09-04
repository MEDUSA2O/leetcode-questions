class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses, 0);
        vector<vector<int>> adjlist(numCourses);
        for (auto i : prerequisites) {
            int pre = i[1];
            int course = i[0];
             adjlist[pre].push_back(course);
            indegree[course]++;
        }
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        int processed = 0;
        while (!q.empty()) {
            int c = q.front();
            q.pop();
            processed++;
            for (auto nc : adjlist[c]) {
                indegree[nc]--;
                if (indegree[nc] == 0) {
                    q.push(nc);
                }
            }
        }
        return processed == numCourses;
    }
};