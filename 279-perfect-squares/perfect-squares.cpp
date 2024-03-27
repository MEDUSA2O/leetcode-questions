#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        // Create a dynamic programming array to store the minimum number of perfect squares needed to sum up to index i
        vector<int> dp(n + 1, INT_MAX);
        // bottom case
        dp[0] = 0;

        // Iterate through each number from 1 to n
        for (int i = 1; i <= n; ++i) {
            // Iterate through each square number up to the square root of i
            for (int j = 1; j * j <= i; ++j) {
                // Update dp[i] by taking the minimum between its current value and dp[i - j*j] + 1
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        // Return the minimum number of perfect squares needed to sum up to n
        return dp[n];
    }
};
