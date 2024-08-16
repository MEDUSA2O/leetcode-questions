class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int miniVal = arrays[0][0];
        int maxval = arrays[0].back();
        int ans = 0;
        for(int i = 1 ; i < arrays.size() ; i++){
            ans = max(ans,max(arrays[i].back() - miniVal , maxval - arrays[i][0]));
            miniVal = min(miniVal , arrays[i][0]);
            maxval = max(maxval , arrays[i].back());

        }
        return ans;
        
    }
};