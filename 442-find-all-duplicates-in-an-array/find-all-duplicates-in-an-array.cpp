class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int a = nums.size();
        vector<int> res;
        for (int i = 0; i < a; i++) {
            int n = abs(nums[i]);
            if (nums[n - 1] < 0) {
                res.push_back(n);
            } else {
                nums[n - 1] = -nums[n - 1];
            }
        }
        return res;
    }
};