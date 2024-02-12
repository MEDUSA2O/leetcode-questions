#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res; // Vector to store the sequential digits within the range

        int low_digit = to_string(low).length(); // Length of digits in low
        int high_digit = to_string(high).length(); // Length of digits in high

        for (int digits = low_digit; digits <= high_digit; ++digits) {
            for (int start = 1; start <= 9; ++start) {
                if (start + digits > 10) {
                    break; // If the next sequential number exceeds 10, break the loop
                }
                int num = start;
                int prev = start;
                for (int i = 0; i < digits - 1; ++i) {
                    num *= 10; // Shift digits left by multiplying by 10
                    prev += 1; // Increment the previous digit
                    num += prev; // Append the next sequential digit
                }
                if (low <= num && num <= high) {
                    res.push_back(num); // If the number falls within the range, add it to the result
                }
            }
        }
        return res; // Return the vector containing sequential digits within the range
    }
};
