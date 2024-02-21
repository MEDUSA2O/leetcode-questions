class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int shift = 0;

        // Find the common 1-bits by right shifting both m and n until they are
        // equal
        while (m < n) {
            m >>= 1;
            n >>= 1;
            ++shift;
        }

        // Left shift m by the number of common 1-bits found
        return m << shift;
    }
};
