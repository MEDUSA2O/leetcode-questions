class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long prevsum = 0;
        long long ans = -1;
        for (int n : nums) {
            if (n < prevsum) {
                ans = n + prevsum;
            }
            prevsum += n;
        }
        return ans;
    }
};