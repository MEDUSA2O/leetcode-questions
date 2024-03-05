class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff;
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int diff = nums[j] - nums[i];
                ans = max(ans, diff);
            }
        }
        if (ans > 0)
            return ans;
        return -1;
    }
};