class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        map<int, int> e;

        for (auto interval : intervals) {
            e[interval[0]]++;
            e[interval[1] + 1]--;
        }

        int c = 0;
        int m = 0;

        for (auto event : e) {
            c += event.second;
            m = max(m, c);
        }

        return m;
    }
};
