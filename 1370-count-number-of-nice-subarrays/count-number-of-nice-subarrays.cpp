class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int currsum = 0;
        int subarr = 0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            currsum += nums[i] % 2;
            if(mp.find(currsum - k) != mp.end()){
                subarr += mp[currsum - k];
            }
            mp[currsum]++;

        }
        return subarr;
        
    }
};