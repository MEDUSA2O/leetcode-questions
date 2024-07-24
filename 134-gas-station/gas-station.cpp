class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgain = 0 , currentgain = 0 , ans = 0;
        for(int i = 0 ; i < cost.size() ; i++){
            totalgain += gas[i] - cost[i];
            currentgain += gas[i] - cost[i];
            if( currentgain < 0){
                ans = i + 1;
                currentgain = 0;
            }
        }
        return totalgain >= 0 ? ans : -1;
        
        
    }
};