class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& r, vector<int>& c) {
        int m=r.size(),n=c.size();
        vector<vector<int>> v(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
          
            for(int j=0;j<n;j++)
            {
                v[i][j]=min(r[i],c[j]);
                r[i]-=v[i][j];
                c[j]-=v[i][j];
            }   
        }
        return v;
    }
};