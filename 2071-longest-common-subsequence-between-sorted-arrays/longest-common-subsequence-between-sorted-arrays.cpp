class Solution {
public:
    vector<int> longestCommonSubsequence(vector<vector<int>>& arrays) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (const auto& array : arrays) {
            for (int i : array) {
                mp[i]++;
                if (mp[i] == arrays.size()) {
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};