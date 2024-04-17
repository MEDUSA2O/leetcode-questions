class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s = 0 ; 
        for(auto i : nums){
            s = s ^ i;

        }
        return s;
        
    }
};