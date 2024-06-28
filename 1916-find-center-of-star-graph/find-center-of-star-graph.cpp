class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> mp;
        for (int i = 0; i < edges.size(); i++) {
            for (int j = 0; j < 2; j++) {
                mp[edges[i][j]]++;
            }
        }

        int maxi = INT_MIN;
        int center = -1; // To store the node with the maximum count
        for (auto& a : mp) {
            if (a.second > maxi) {
                maxi = a.second;
                center = a.first;
            }
        }
        
        return center;
    }
};
