class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() <= k)
            return "0";
        int n = num.size();
        int i = 0;
        while (k > 0 && i < n - 1) {
            if (num[i] > num[i + 1]) {
                num.erase(i, 1);
                if (i > 0)
                    i--;
                k--;
            } else {
                i++;
            }
        }
        // If there are remaining digits to remove, remove them from the end
        while (k > 0) {
            num.pop_back();
            k--;
        }
        // Remove leading zeros
        while (!num.empty() && num[0] == '0') {
            num.erase(0, 1);
        }
        // If the resulting string is empty, return "0"
        return num.empty() ? "0" : num;
    }
};
