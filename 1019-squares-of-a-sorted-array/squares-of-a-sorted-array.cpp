class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l = 0;
        int r = nums.size() - 1;
        int curr = r ;
        while (l <= r) {
            if (abs( nums[l] ) > abs( nums[r] )) {
                ans[curr] = pow(nums[l], 2);
                l++;
            } else {
                ans[curr] = pow(nums[r], 2);
                r--;
            }
            curr--;
        }
        return ans;
    }
};