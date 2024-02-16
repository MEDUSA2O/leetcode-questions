class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int l1 = word1.length();
        int l2 = word2.length();
        int n = max(l1, l2);
        for (int i = 0; i < n; i += 1) {
            if( i < l1){
                 s += word1[i];
            }
            if( i < l2){
                 s += word2[i];
            }
        }
        return s;
    }
};