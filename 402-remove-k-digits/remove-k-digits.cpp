class Solution {
public:
    string removeKdigits(string num, int k) {
        int i = 0;
        int n = num.size();
        while (i < n - 1 && k > 0) {
            if (num[i] > num[i + 1]) {
                num.erase(i, 1);
                if (i > 0) {
                    i--;
                }
                k--;
            } else {
                i++;
            }
        }
        while (k > 0) {
            num.pop_back();
            k--;
        }
        while (!num.empty() && num[0] == '0') {
            num.erase(0, 1);
        }
        return num.empty() ? "0" : num;
    }
};