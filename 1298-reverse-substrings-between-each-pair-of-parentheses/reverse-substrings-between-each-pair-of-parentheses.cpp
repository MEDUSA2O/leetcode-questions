class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string res;
        for(char i : s) {
            if (i == '(') {
                st.push(res.size());
            } else if (i == ')') {
                int ans = st.top();
                st.pop();
                reverse(res.begin() + ans, res.end());

            } else {
                res += i;
            }
        }
        return res;
    }
};