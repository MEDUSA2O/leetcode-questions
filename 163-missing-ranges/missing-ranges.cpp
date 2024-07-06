class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower,
                                          int upper) {
        vector<vector<int>> missingrange;
        int n = nums.size();
        if (n == 0) {
            missingrange.push_back(vector<int>{lower, upper});
            return missingrange;
        }
        if (lower < nums[0]) {
            missingrange.push_back(vector<int>{lower, nums[0] - 1});
        }
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] - nums[i] <= 1) {
                continue;
            }
            missingrange.push_back(vector<int>{nums[i] + 1, nums[i + 1] - 1});
        }
        if (upper > nums[n - 1]) {
            missingrange.push_back(vector<int>{nums[n - 1] + 1, upper});
        }
        return missingrange;
    }
};