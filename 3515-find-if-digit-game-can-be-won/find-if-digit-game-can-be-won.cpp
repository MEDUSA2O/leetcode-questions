class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s1 = 0 , s2 = 0 ;
        for(auto i : nums){
            if(i >= 10){
                s1 += i;
            }
            else{
                s2 += i;
            }
        }
        if(s1 == s2)return false;
        else{
            return true;
        }
        
    }
};