class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        for(int i = nums.size() - 1 ; i >= 0 ; i-- ){
            if((i == 0 || nums[i] != nums[i-1])&& (i == nums.size() - 1 || nums[i] != nums[i+1])){
                return nums[i];
            }
        }
        return -1;
    }
};