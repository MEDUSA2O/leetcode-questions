class Solution {
public:
    string makeGood(string s) {
        if (s == "")
            return s;
        int n = s.size();
        for (int i = 0; i < n - 1; i++) {
            if (abs(s[i] - s[i + 1]) == 32) { 
                s.erase(i, 2); 
                i = max(i - 2, -1); 
                n -= 2; 
            }
        }
        return s;
    }
};