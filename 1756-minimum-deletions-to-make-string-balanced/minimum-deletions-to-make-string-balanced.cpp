class Solution {
public:
    int minimumDeletions(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n = s.length();
        stack<char> st;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (!st.empty() && st.top() == 'b' && s[i] == 'a') {
                st.pop();
                ans++;

            } else {
                st.push(s[i]);
            }
        }
        return ans;
    }
};