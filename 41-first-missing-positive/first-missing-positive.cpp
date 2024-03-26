class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool ans = false;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                ans = true;
            }
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = 1;
            }
        }
        if (ans == false) {
            return 1;
        }
        for (int j = 0; j < n; j++) {
            int val = abs(nums[j]);
            if (val == n)
                nums[0] = -abs(nums[0]);
            else {
                nums[val] = -abs(nums[val]);
            }
        }
        for (int i = 1; i < n; i++) {
            if (nums[i] > 0) {
                return i;
            }
        }
        if (nums[0] > 0)
            return n;
        
        return n + 1;
    }
};