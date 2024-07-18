class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mind = INT_MAX;
        int result = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int absVal = abs(nums[i]);
            if (absVal < mind) {
                mind = absVal;
                result = nums[i];
            } else if (absVal == mind) {
                result = max(result, nums[i]);
            }
        }
        return result;
    }
};
