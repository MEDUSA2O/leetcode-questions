class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> res;

        int left = 0, right = matrix[0].size();
        int top = 0, bottom = matrix.size();

        while (left < right && top < bottom) {
            // get every element in the top row
            for (int i = left; i < right; ++i) {
                res.push_back(matrix[top][i]);
            }
            top += 1;

            // get every element in the right column
            for (int i = top; i < bottom; ++i) {
                res.push_back(matrix[i][right - 1]);
            }
            right -= 1;

            if (!(left < right && top < bottom)) {
                break;
            }

            // get every element in the bottom row
            for (int i = right - 1; i >= left; --i) {
                res.push_back(matrix[bottom - 1][i]);
            }
            bottom -= 1;

            // get every element in the left column
            for (int i = bottom - 1; i >= top; --i) {
                res.push_back(matrix[i][left]);
            }
            left += 1;
        }

        return res;
        
    }
};