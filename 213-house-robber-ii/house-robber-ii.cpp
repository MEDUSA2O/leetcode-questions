#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);

        vector<int> rob1(nums.begin(), nums.end() - 1);
        vector<int> rob2(nums.begin() + 1, nums.end());
        
        return max(robLinear(rob1), robLinear(rob2));
    }
    
private:
    int robLinear(const vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        
        return dp[n - 1];
    }
};
