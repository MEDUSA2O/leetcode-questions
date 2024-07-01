class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = 0 ;
        for(int i = 0 ; i < arr.size() ;i++){
            if(arr[i] % 2 != 0 ){
                n++;
                if(n == 3){
                    return true;
                }
            }
            else{
                n = 0;
            }

        }
        return false;
        
    }
};