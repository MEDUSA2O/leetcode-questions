class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>> distPoints;

        for (auto& point : points) {
            int x = point[0];
            int y = point[1];
            int dist = x * x + y * y;  
            distPoints.push_back({dist, point});
        }

        sort(distPoints.begin(), distPoints.end());

        vector<vector<int>> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(distPoints[i].second);
        }

        return result;
    }
};
