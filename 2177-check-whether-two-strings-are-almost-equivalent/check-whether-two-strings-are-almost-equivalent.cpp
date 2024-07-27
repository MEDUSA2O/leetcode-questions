class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char,int>m1;
        for(auto i : word1){
            m1[i]++;
        }
        for( auto i : word2){
            m1[i]--;
        }
        for(auto i : m1){
            if( abs(i.second) > 3){
                return false;
            }
        }
        return true;
    }
};