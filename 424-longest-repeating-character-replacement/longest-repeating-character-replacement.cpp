class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int i = 0, j = 0, maxi = 0;
        int n = s.size();
        int ans = -1;
        while (j < n) {
            mp[s[j]]++;
            maxi = max(mp[s[j]], maxi);
            if ((j - i + 1) - maxi > k) {
                mp[s[i]]--;
                i++;
            }
             ans = max(j - i + 1, ans);
            j++;
        }
        return ans;
    }
};