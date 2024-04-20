#include <vector>
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int loner = 0;
        for (int shift = 0; shift < 32; shift++) {
            int bitSum = 0;
            for (int num : nums) {
                bitSum += (num >> shift) & 1;
            }
            int lonerBit = bitSum % 3;
            loner |= (lonerBit << shift);
        }
        return loner;
    }
};
