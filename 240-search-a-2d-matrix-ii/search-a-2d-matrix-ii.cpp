class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
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