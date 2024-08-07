#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        vector<string> o = {"+", "-", "*", "/"};

        for (string& t : tokens) {
            if (find(o.begin(), o.end(), t) != o.end()) {  
                int n2 = s.top();
                s.pop();
                int n1 = s.top();
                s.pop();
                int res = 0;
                if (t == "+") {
                    res = n1 + n2;
                } else if (t == "-") {
                    res = n1 - n2;
                } else if (t == "*") {
                    res = n1 * n2;
                } else if (t == "/") {
                    res = n1 / n2;
                }
                s.push(res);
            } else {
                s.push(stoi(t));
            }
        }
        return s.top();
    }
};
