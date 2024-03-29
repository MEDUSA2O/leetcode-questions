class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int i = 0;

        // Insert all intervals before the new interval
        while (i < intervals.size() && newInterval[0] > intervals[i][1]) {
            res.push_back(intervals[i]);
            i++;
        }

        // Merge overlapping intervals with the new interval
        while (i < intervals.size() && newInterval[1] >= intervals[i][0]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);

        // Insert all intervals after the new interval
        while (i < intervals.size()) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
        
    }
};