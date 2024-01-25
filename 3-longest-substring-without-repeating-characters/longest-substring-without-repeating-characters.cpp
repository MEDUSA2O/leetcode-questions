#include <unordered_set>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set1;
        int l = 0 ;
        int res = 0 ;
        for(int r = 0 ; r<s.size() ; r++){
            while(set1.find(s[r]) != set1.end() ){
                set1.erase(s[l]);
                l++;
            }
            set1.insert(s[r]);
            res = max(res , r -l + 1 );
        }
        return res;
        
    }
};