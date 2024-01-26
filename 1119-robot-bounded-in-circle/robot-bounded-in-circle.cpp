class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0 ;
        int y = 0 ; 
        int dirX = 0 ;
        int dirY = 1;
        for(auto i : instructions){
            if( i == 'G'){
                x += dirX;
                y += dirY;

            }
            else if(i == 'L'){
                int temp = dirX ; 
                dirX = - dirY;
                dirY = temp;
            }
            else{
                int temp = dirX;
                dirX = dirY;
                dirY = -temp;
            }
        }
        return(x == 0 && y == 0) || ( dirX != 0 || dirY != 1);

        
    }
};