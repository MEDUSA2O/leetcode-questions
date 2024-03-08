class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for( int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        int maxfreq = INT_MIN;
        for(auto [num , frequency ] : mp){
            maxfreq = max( maxfreq , frequency );
        }
        int ElementsWithMaxFreq = 0 ;
        for(auto [num , frequency ] : mp){
            if( frequency == maxfreq ){
                ElementsWithMaxFreq++;
            }
        }
        return ElementsWithMaxFreq * maxfreq ;



        
    }
};