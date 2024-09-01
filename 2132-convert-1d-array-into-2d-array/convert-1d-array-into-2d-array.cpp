class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        if (m * n != original.size()) {
            return {};
        }

        vector<vector<int>> ans(m, vector<int>(n));

        int i = 0 ;
        for(int r = 0 ; r < m ; r++){
            for(int c = 0 ; c < n ;c++){
                ans[r][c] = original[i];
                i++;
            }
        }
        return ans;
    }
};
