class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0 , j = 0 ;
        while( i < word.size() && j < abbr.size()){
            if(isdigit(abbr[j])){
                if(abbr[j] == '0'){
                    return false;
                }
                int num = 0;
                while(isdigit(abbr[j]) && j <abbr.size()){
                    num = num *10 + (abbr[j] - '0');
                    j++;
                }
                i+= num;
            }
            else{
                if(word[i] != abbr[j]){
                    return false;
                }
                i++;
                j++;
            }
        }
return i == word.size() && j == abbr.size();        
    }
};