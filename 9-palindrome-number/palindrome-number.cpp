class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0 ) return false;
        long long temp = x ;
        long long reversed = 0 ;
        while( temp != 0){
            int dig = temp % 10;
            reversed = reversed * 10 + dig ;
            temp = temp / 10;
        }
        if( reversed == x ) return true;
        else{
            return false;
        }
        
    }
};