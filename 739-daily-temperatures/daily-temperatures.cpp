class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size() , 0);
        stack<pair<int,int>>s;
        int n = temperatures.size();
        for(int i = 0 ; i < n ; i++ ){
            int t = temperatures[i];
            while( !s.empty() && t > s.top().first){
                auto [temp , index] = s.top();
                s.pop();
                ans[index] = i - index;

            }
            s.push({t,i});

        }
        return ans;
        
    }
};