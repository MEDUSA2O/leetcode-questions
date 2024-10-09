class Solution {
public:
    int minAddToMakeValid(string s) {
        int opb = 0;
        int minadd = 0;
        for(char c : s){
            if(c == '('){
                opb++;
            }
            else{
                opb > 0 ? opb-- : minadd++;
            }
        }
        return minadd + opb;
        
    }
};