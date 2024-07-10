class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c1 = 0 ;
        for( auto i : logs ){
            if( i == "../"){
                if( c1 != 0 ){
                c1--;
                }
            }
            else{
                if( i != "./")
                {c1++;}
            }
        }
        return c1;        
    }
};