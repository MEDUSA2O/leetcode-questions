class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n - 2; i++) {
             if (i > 0 && nums[i] == nums[i - 1]) {
                continue;  // Skip duplicate values for 'a'
            }
            int a = nums[i];
            int l = i + 1;
            int r = n - 1;

            while (l < r) {
                int sum = a + nums[l] + nums[r];
                if (sum == 0) {
                    ans.push_back({a, nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                    while (l < r && nums[r] == nums[r + 1]) {
                        r--;
                    }
                } else if (sum < 0) {
                    l++;
                } else {
                    r--;
                }
            }
            // while (i < n - 1 && nums[i] == nums[i - 1]) {
            //     i++;
            // }
        }
        return ans;
    }
};