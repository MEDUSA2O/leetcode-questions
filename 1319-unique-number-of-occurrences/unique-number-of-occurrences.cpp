class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        sort(arr.begin() , arr.end());
        for(int i : arr){
            mp[i]++;
        }
        for(const auto& j : mp ){
            for(const auto& k : mp){
                if( j.second == k.second && &j != &k){
                    return false;
                }
            }
        }
        return true;
        
    }
};