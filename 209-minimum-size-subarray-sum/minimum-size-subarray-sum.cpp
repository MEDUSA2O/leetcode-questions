class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 ; 
        int n = nums.size();
        int total =0;
        int len = INT_MAX;
        for(int r = 0 ; r < n ; r++){
            total += nums[r];
            while( total >= target){
                len = min(len,r-l+1);
                total -= nums[l];
                l++;
            }
        }
        return len == INT_MAX ? 0 : len;
        
    }
};