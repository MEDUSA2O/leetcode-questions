class Solution {
public:
    int maxDepth(string s) {
        int maxx = 0;
        stack<char> p;
        for (char i : s) {
            if (i == '(') {
                p.push('(');
            } else if (i == ')' && !p.empty()) {
                p.pop();
            }
            if (maxx < p.size()) {
                maxx = p.size();
            }
        }
        return maxx;
    }
};
