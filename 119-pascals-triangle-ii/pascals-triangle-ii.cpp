#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle;
        vector<int> ans;

        if (rowIndex == 0) {
            ans.push_back(1);
            return ans;
        }

        triangle.push_back({1});
        for (int i = 1; i <= rowIndex; ++i) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; ++j) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            triangle.push_back(row);
        }

        return triangle[rowIndex];
    }
};
