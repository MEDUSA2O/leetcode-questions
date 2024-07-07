class Solution {
public:
    int maxProfit(vector<int>& prices) {
         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int maxprofit = 0;
        int minprice = prices[0];
        int n = prices.size();
        for( int i = 1 ; i < n ; i++){
            maxprofit = max(maxprofit , prices[i] - minprice);
            minprice = min( minprice , prices[i] );
        }
        return maxprofit;
        
    }
};