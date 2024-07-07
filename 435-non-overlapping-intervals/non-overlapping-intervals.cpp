const int ZERO = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
bool comparesoln(vector<int> a, vector<int> b) { return a[1] < b[1]; }
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comparesoln);
        int n = intervals.size();
        int k = INT_MIN;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x = intervals[i][0];
            int y = intervals[i][1];
            if (k <= x) {
                k = y;
            } else {
                ans++;
            }
        }
        return ans;
    }
};