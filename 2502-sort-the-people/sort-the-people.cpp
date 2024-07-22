
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       map<int,string>mp;
        for(int i = 0 ; i < heights.size() ; i++){
            mp[heights[i]] = names[i];
        }
        // sort(heights.begin() , heights.end());
        vector<string>ans;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};