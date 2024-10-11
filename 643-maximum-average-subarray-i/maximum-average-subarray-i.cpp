class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        vector<int>s(nums.size());
        s[0] = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            s[i] = s[i-1] + nums[i];
        }
        double r = s[k-1] * 1.000/k;
        for(int i = k ; i < nums.size() ; i++){
            r = max(r , (s[i] - s[i-k])*1.00/k);
        }
        return r;
        
    }
};