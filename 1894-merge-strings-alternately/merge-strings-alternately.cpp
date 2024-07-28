class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.size();
        int l2 = word2.size();
        int n = max(l1,l2);
        string s;
        for(int i = 0 ; i < n ; i++ ){
            if( i < l1 ){
                s += word1[i];
            }
            if( i < l2 ){
                s += word2[i];
            }
        }
        return s;
        
    }
};