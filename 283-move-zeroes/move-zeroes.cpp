class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans ; 
        int s = nums.size();
        int count = 0 ;
        for( int i = 0 ; i < s ; i++ ){
            if(nums[i] != 0){
                nums[count] = nums[i] ;
                count++;
            }
        }
        while(count < s){
            nums[count++] = 0;
        }
        
    }
};