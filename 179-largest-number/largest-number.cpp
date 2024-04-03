class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> Numstostr;
        for (int x : nums) {
            Numstostr.push_back(to_string(x));
        }
        sort(Numstostr.begin(), Numstostr.end(),
             [](string a, string b) { return a + b > b + a; });
        string ans;
        for (string y : Numstostr) {
            ans += y;
        }
        if (ans[0] == '0') {
            return "0";
        }
        return ans;
    }
};