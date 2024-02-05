class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> k;
        stack<char> b;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '#') {
                if (!k.empty()) {
                    k.pop();
                }
            } else {
                k.push(s[i]);
            }
        }

        for (int i = 0; i < t.length(); i++) {
            if (t[i] == '#') {
                if (!b.empty()) {
                    b.pop();
                }
            } else {
                b.push(t[i]);
            }
        }

        vector<char> a, c;

        while (!k.empty()) {
            a.push_back(k.top());
            k.pop();
        }

        while (!b.empty()) {
            c.push_back(b.top());
            b.pop();
        }

        return a == c;
        
    }
};