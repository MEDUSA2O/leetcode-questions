class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //if(nums.size() == 1)return 1;
        for(int i = 1 ; i < nums.size() ; i++){
            int c = 0;
            if(nums[i] != nums[i+1] && nums[i-1] != nums[i]){
                return nums[i];
            }
        }
        return nums[0];
        
    }
};