class Solution {
public:
 Solution(){
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    }
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp1;
        map<char,int>mp2;
        for (auto i : magazine) {
            mp1[i]++;
        }
        for (auto i : ransomNote) {
            mp2[i]++;
        }
        for(auto i : mp2){
            if(mp1.find(i.first) ==mp1.end()){
                return false;
            }
            else{
                if(mp1[i.first] < i.second ){
                    return false;
                }
            }
        }
        return true;
    }
};