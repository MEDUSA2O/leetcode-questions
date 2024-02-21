class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int n = heights.size();
        int max = heights[n - 1];
        vector<int> ans;
        ans.push_back(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            if (heights[i] > max) {
                ans.push_back(i);
                max = heights[i];
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};