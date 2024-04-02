class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> cp;
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == '\0') {
                for (const auto& kv : mp) {
                    if (kv.second == t[i]) {
                        return false;
                    }
                }
                mp[s[i]] = t[i];
            } else {
                if (mp[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};