class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n = votes.size();
        int m = votes[0].size();
        vector<vector<int>> vec(m, vector<int>(26, 0));
        for (auto j : votes) {
            for (int i = 0; i < m; i++) {
                vec[i][j[i] - 'A']++;
            }
        }
        string str = votes[0];

        sort(str.begin(), str.end(), [&](char a, char b) {
            for (int i = 0; i < m; i++) {
                if (vec[i][a - 'A'] == vec[i][b - 'A'])
                    continue;
                else
                    return vec[i][a - 'A'] > vec[i][b - 'A'];
            }
            return a < b;
        });
        return str;
    }
};