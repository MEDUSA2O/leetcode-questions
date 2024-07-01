class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0); 
        
        int n = nums.size();
        if( n== 0)return 0;
        int curr = nums[0];
        int maxi = nums[0];
        for(int i =1 ; i < n ;i++){
            curr = max(nums[i] , curr+nums[i]);
            maxi = max(curr,maxi);
        }
        return maxi;
        
    }
};