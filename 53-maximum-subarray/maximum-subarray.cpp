class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int sum = 0, n = nums.size(), maxSum = INT_MIN;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            maxSum = max(sum, maxSum);
            if (sum < 0)
                sum = 0; // dont carry negative it will hamper the sum
        }
        return maxSum;
    }
};