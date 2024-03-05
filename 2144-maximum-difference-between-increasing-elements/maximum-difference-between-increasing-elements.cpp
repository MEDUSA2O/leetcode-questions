class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = -1, minValue = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            minValue = min(minValue, nums[i]);
            if (nums[i] > minValue) {
                maxDiff = max(maxDiff, nums[i] - minValue);
            }
        }
        return maxDiff;
    }
};