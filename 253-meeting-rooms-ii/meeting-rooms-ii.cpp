class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return 0;
        vector<int> first(intervals.size());
        vector<int> second(intervals.size());
        for (int i = 0; i < intervals.size(); i++) {
            first[i] = intervals[i][0];
            second[i] = intervals[i][1];
        }
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        int i = 0;
        int j = 0;
        int count = 0;
        while (i < intervals.size()) {
            if (first[i] >= second[j]) {
                count--;
                j++;
            }
            count++;
            i++;
        }
        return count;
    }
};