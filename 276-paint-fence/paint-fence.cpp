class Solution {
    int solve(int n, int k){
        if(n == 1)return k;
        int prev2 = k;
        int prev1 = k*k;

        for(int i=3 ; i<=n ; i++){
            int ans = ((k-1)*((prev1) + (prev2))) ;
            prev2 = prev1;
            prev1 = ans;
        }

        return prev1;
    }
public:
    int numWays(int n, int k) { return solve(n, k); }
};