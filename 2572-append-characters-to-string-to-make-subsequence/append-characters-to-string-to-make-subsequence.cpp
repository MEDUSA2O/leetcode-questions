class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0;
        int j = 0;
        int count = 0 ;
        while( i < s.size()){
            if(s[i] == t[j]){
                count++;
                j++;
            }
            i++;
        }
        return t.size() - count;
    }
};