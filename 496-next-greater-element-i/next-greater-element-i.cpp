#include <vector>
#include <stack>
#include <unordered_map>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::stack<int> stack;
        std::unordered_map<int, int> map;
        
        for (int num : nums2) {
            while (!stack.empty() && num > stack.top()) {
                map[stack.top()] = num;
                stack.pop();
            }
            stack.push(num);
        }
        
        while (!stack.empty()) {
            map[stack.top()] = -1;
            stack.pop();
        }
        
        std::vector<int> res(nums1.size());
        for (size_t i = 0; i < nums1.size(); ++i) {
            res[i] = map[nums1[i]];
        }
        
        return res;
    }
};
