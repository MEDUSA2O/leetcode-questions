class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<int>targettime = times[targetFriend];
        int n = times.size();
        vector<int>chair(n);
        sort(times.begin(),times.end());
        for(auto t : times){
            for(int i = 0 ; i < n ; i ++){
                if(chair[i] <= t[0]){
                    chair[i] = t[1];
                    if(t == targettime)return i;
                    break;
                }
            }
        }
        return 0;
    }
};