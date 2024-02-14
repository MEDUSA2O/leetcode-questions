class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i++){
            if( nums[i] < 0 )neg.push_back(nums[i]);
            if( nums[i] > 0 )pos.push_back(nums[i]);
        }
        for(int j = 0 ; j < nums.size()/2 ; j++){
            ans.push_back(pos[j]);
            ans.push_back(neg[j]);
        }
        return ans;

        
    }
};