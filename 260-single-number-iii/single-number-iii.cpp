#include <unordered_map>
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        if (nums.size() == 2)
            return nums;
        for (auto i : nums) {
            mp[i] += 1;
        }
        for (auto j : mp) {
            if (j.second == 1) {
                ans.push_back(j.first);
            }
        }
        return ans;
    }
};