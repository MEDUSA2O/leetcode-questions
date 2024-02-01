class Solution {
public:
    bool isPowerOfTwo(int n) {
        if( n == 1 ) return true;
        if(n < 0 )return false;
        long long x = 1;
        while (x < n) {
            x = x * 2;
        }
        if (x == n)
            return true;
        else {
            return false;
        }
    }
};