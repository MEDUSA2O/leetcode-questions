class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();
        vector<int>currrowsum(n,0);
        vector<int>currcolsum(m,0);
        vector<vector<int>>org(n,vector<int>(m,0));
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ;  j < m ; j++ ){
                org[i][j] = min(rowSum[i] - currrowsum[i] , colSum[j] - currcolsum[j]);
                currrowsum[i] += org[i][j];
                currcolsum[j] += org[i][j];

            }
        }
        return org;
    }
};