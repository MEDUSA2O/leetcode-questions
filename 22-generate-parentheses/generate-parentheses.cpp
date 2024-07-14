class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>>dp(n+1);
        dp[0] = {""};
        for(int i = 1 ;i <= n ; i++ ){
            for(int j = 0 ; j < i ; j++){
                for(string f : dp[j]){
                    for(string s : dp[i-1-j]){
                        dp[i].push_back("(" + f + ")" + s);
                    }
                }
            }
        }
        return dp[n];


        
    }
};