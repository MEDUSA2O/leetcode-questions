#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        int prefix_sum = 0;
        int res = 0;
        std::unordered_map<int, int> prefix_cnt;
        prefix_cnt[0] = 1;

        for (int n : nums) {
            prefix_sum += n;
            int remain = ((prefix_sum % k) + k) % k;  // Ensure the remainder is positive
            res += prefix_cnt[remain];
            prefix_cnt[remain]++;
        }

        return res;
    }
};
