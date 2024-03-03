class Solution {
public:
    int minOperations(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int c=0;
        int n=v.size();
        for(int i=0;i<n;i++) {
            if(v[i]>=k)
                return c;
            c++;
        }
        return c;
    }
};