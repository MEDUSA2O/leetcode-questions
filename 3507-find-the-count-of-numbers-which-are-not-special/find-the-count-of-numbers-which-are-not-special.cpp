#include <cmath>

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 1) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }

    int nonSpecialCount(int l, int r) {
        // Ensure l is not greater than r
        if (l > r) return 0;

        int temp1 = ceil(sqrt(l));  // Ensure to start from the correct integer
        int temp2 = floor(sqrt(r)); // Ensure to end at the correct integer
        int ans = 0; // stores the total number of special numbers in the range l to r

        for (int i = temp1; i <= temp2; i++) {
            if (i * i >= l && i * i <= r && isPrime(i)) {
                ans++;
            }
        }

        return (r - l + 1 - ans);
    }
};