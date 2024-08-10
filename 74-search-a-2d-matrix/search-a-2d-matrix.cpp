class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     int a = matrix.size();
    //     int b = matrix[0].size();
    //     int start = 0;
    //     int end = (a * b) - 1;

    //     while (start <= end) {
    //         int mid = (start + end) / 2;
    //         int n = mid / b;
    //         int m = mid % b;

    //         if (matrix[n][m] == target)
    //             return true;
    //         else if (matrix[n][m] < target)
    //             start = mid + 1;
    //         else
    //             end = mid - 1;
    //     }
    //     return false;
    // }
    int row = matrix.size() - 1;
        int colm = 0 ;
        while( row >= 0 && colm < matrix[0].size()){
            if(matrix[row][colm] > target){
                row --;
            }
            else if(matrix[row][colm] < target){
                colm++;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};