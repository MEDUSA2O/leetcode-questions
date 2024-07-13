class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.size() == 0) return 0;
        
        int maxArea = 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Initialize a dp table to store the width of '1's
        vector<vector<int>> dp(rows, vector<int>(cols, 0));
        
        // Iterate through the matrix
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // If the current cell is '1'
                if (matrix[i][j] == '1') {
                    // Compute the width of '1's ending at this cell
                    dp[i][j] = (j == 0) ? 1 : dp[i][j - 1] + 1;
                    int width = dp[i][j];
                    
                    // Compute the maximum area rectangle with bottom-right corner at [i, j]
                    for (int k = i; k >= 0; k--) {
                        width = min(width, dp[k][j]); // Minimum width from the current row to the row k
                        int height = i - k + 1;       // Height of the rectangle
                        maxArea = max(maxArea, width * height); // Update max area
                    }
                }
            }
        }
        
        return maxArea;
    }
};
