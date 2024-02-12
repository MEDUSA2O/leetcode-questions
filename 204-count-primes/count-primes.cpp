class Solution {
public:
    int countPrimes(int n) {
        if( n <= 2 ) return 0 ;
        int limit = sqrt(n);
        vector<bool>ans(n,false);
        for(int i = 2 ; i <= limit ; i++){
            if( ans[i] == false ){
                for(int j = i * i ; j < n ; j += i){
                    ans[j] = true;
                }

            }

        }
        int count = 0; 
        for(int i = 2 ; i < n ; i++){
             if(ans[i] == false ){
                 count ++ ;
             }
        }
        return count;
        
    }
};