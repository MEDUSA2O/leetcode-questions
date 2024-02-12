class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int ans ; 
        int n =nums.size();
        if(n == 1) return nums[0];
        int no = nums[0];
        int count = 1;
        for( int i = 1 ; i < n ; i++){
            if(no == nums[i]){
                count++ ;
                if(count > n/2){
                     ans = nums[i];
                     break;

                } 

            } 
            else{
                no = nums[i];
                count = 1;
            }
        }
        return ans;
    }
};