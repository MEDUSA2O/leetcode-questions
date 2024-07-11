class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgain = 0 , currgain = 0 , ans = 0;
        for( int i = 0 ; i < cost.size() ; i++ ){
            totalgain += gas[i] - cost[i];
            currgain += gas[i] - cost[i];
            if( currgain < 0 ){
                ans = i + 1 ;
                currgain = 0 ;
            }
        }
        return totalgain >= 0 ? ans : -1 ;
    }
};