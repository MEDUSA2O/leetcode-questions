class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int score = 0;
        int res = 0 ;
        int l = 0;
        int r = tokens.size() - 1;
        while (l <= r) {
            if (power >= tokens[l]) {
                power -= tokens[l];
                l++;
                score++;
                res = max(score, res);
            } else if (score > 0) {
                power += tokens[r];
                r--;
                score-- ;
            } else {
                break;
            }
        }
        return res;
    }
};