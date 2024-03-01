#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans ;      
        int sz = s.size() ;

        int ones = count ( s.begin() , s.end() , '1');
         ans += '1' ;
         ones -- ;
        int zeros = sz - ones;
        while( zeros-- > 1){
            ans += '0';
        }
        while( ones-- > 0){
            ans += '1';
        }
        reverse( ans.begin() , ans.end() );
        return ans;
    }
};
