#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        vector<char> ans;
        int n = s.length();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count++;
            }
        }
        for (int j = count; j > 1; j--) {
            ans.push_back('1');
        }
        for (int j = n - count; j > 0; j--) {
            ans.push_back('0');
        }
        ans.push_back('1');
        string str(ans.begin(), ans.end());
        return str;
    }
};
