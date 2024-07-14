class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int count = 0;
        unordered_map<char, vector<int>> mp;
        int n1 = s.size();
        for (int i = 0; i < n1; i++) {
            mp[s[i]].push_back(i);
        }
        for (string m : words) {
            int prev = -1;
            bool pre = true;
            for (char c : m) {
                if (mp.find(c) == mp.end()) {
                    pre = false;
                    break;
                }
                
                auto it = upper_bound(mp[c].begin(), mp[c].end(), prev);
                if (it == mp[c].end()) {
                    pre = false;
                    break;
                }
                prev = *it;
            }
            if (pre == true) {
                count++;
            }
        }
        return count;
    }
};