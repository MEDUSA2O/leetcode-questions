class Solution {
public:
    int n;
    vector<vector<int>> memo;

    int minSteps(int n) {
        if (n == 1) return 0;
        this->n = n;

        memo = vector<vector<int>>(n + 1, vector<int>(n / 2 + 1, 0));
        return 1 + v(1, 1);
    }

    int v(int currLen, int pasteLen) {
        if (currLen == n) return 0;
        if (currLen > n) return 1000;

        if (memo[currLen][pasteLen] != 0) return memo[currLen][pasteLen];

        int opt1 = 1 + v(currLen + pasteLen, pasteLen);
        int opt2 = 2 + v(currLen * 2, currLen);
        memo[currLen][pasteLen] = min(opt1, opt2);
        return memo[currLen][pasteLen];
    }
};