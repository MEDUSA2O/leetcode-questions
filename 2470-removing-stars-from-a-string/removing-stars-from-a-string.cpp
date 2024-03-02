class Solution {
public:
    string removeStars(string s) {
        stack<char> store;
        store.push(s[0]);
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '*') {
                store.pop();
            } else {
                store.push(s[i]);
            }
        }
        string ans;
        while (!store.empty()) {
            char a = store.top();
            store.pop();
            ans += a;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};