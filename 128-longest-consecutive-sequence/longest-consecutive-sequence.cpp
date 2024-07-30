class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0;
        for (auto i : s) {
            if (s.find(i - 1) == s.end()) {
                int currnum = i;
                int len = 1;
                while (s.find(currnum + 1) != s.end()) {
                    currnum += 1;
                    len += 1;
                }
                 ans = max(ans, len);
            }

           
        }
        return ans;
    }
};