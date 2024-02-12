class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans;
        int n1 = nums[0];
        int count = 1;
        int n = nums.size();
        if(n == 1) return nums[0] ;
        for (int i = 1; i < n; i++) {
            if (n1 == nums[i]) {
                count++;
                if (count > n / 2) {
                    ans = nums[i];
                    break;
                }
            } else {
                n1 = nums[i];
            }
        }
        return ans;
    }
};