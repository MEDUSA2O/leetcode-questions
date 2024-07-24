class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>c(26,0);
        for(auto i : magazine){
            c[i - 'a']++;
        }
        for(auto j : ransomNote){
            if(--c[j - 'a'] < 0){
                return false;
            }
        }
        return true;
        
    }
};

