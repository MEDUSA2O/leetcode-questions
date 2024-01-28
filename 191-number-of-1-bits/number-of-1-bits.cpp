class Solution {
public:
    int hammingWeight(uint32_t n) {
        long long int res = 0 ;
        while( n != 0){
            if(n % 2 == 1){
                res++;
               
            }
            n = n >> 1;
        }
        return res;
        
    }
};