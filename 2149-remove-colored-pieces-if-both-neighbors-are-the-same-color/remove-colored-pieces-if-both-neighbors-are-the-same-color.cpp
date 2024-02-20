class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice = 0 ; 
        int bob = 0 ; 
        for(int i = 1 ; i < colors.size() ; i++){
            if(colors[i] == colors[i-1] && colors[i] == colors[i+1]){
                if(colors[i] == 'A') alice++;
                if(colors[i] == 'B') bob++;
            }
        }
        return alice - bob >= 1;

    }
};