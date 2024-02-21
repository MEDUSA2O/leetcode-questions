class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> res;
        int max = 0;
        for(int i=heights.size()-1; i>=0; i--){
            if(heights[i] > max){
                res.push_back(i);
                max = heights[i];
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};