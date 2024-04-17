#include <unordered_set>
#include <vector>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_set<int> set;
        for (int i = 0; i < nums.size(); ++i) {
            if (set.find(nums[i]) != set.end()) {
                
                return true;
            }
            set.insert(nums[i]);
            if (i >= k) {
                set.erase(nums[i - k]);
            }
        }
        return false;
    }
};
