class Solution {
public:
    bool isSubsequence(string s, string t) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        unordered_map<char, vector<int>> mp;
        int s1 = s.size();
        int s2 = t.size();

        for (int i = 0; i < s2; i++) {
            mp[t[i]].push_back(i);
        }

        int prev = -1;

        for (int j = 0; j < s1; j++) {
            char ch = s[j];

            if (mp.find(ch) == mp.end()) {
                return false;
            }

            vector<int> indices = mp[ch];
            auto it = upper_bound(indices.begin(), indices.end(), prev);

            if (it == indices.end()) {
                return false;
            }

            prev = *it;
        }

        return true;
    }
}

;