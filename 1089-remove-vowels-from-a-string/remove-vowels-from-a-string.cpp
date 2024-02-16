class Solution {
public:
bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u';
}
    string removeVowels(string s) {
        string ans;
        for(char i : s){
            if(!isVowel(i)){
                ans += i;
            }
        }
        return ans;
        
    }
};