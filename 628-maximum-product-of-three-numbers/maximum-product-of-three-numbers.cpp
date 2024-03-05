class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort( nums.begin() , nums.end() );
        int product1 = 1 ;
        int product2 = 1 ;
        int n = nums.size() ;
        if( n  == 3 ) return nums[0] * nums[1] * nums[2];
        for( int i = n - 1 ; i > n - 4 ; i--){
            product1 *= nums[i];
        }
        product2 = nums[0] * nums[1] * nums[n - 1];
        return max(product1,product2);
        
    }
};