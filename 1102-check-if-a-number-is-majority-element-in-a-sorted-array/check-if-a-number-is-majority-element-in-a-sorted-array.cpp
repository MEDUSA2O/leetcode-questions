class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        map<int,int>mp;
        for( auto i : nums ){
            mp[i]++;

        }
        int x = nums.size() / 2;
        if(mp[target] > x){
            return true;
        }
        return false;

        
    }
};