#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        if (numRows == 0) return triangle;
        
        triangle.push_back({1}); // Base case
        
        for (int i = 1; i < numRows; ++i) {
            vector<int> row(i + 1, 1); // Initialize each row with 1
            for (int j = 1; j < i; ++j) {
                // Each triangle element (other than the first and last of each row)
                // is equal to the sum of the elements above-and-to-the-left and
                // above-and-to-the-right.
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            triangle.push_back(row);
        }
        
        return triangle;
    }
};
