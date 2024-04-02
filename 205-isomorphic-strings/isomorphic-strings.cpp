class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> cp;
        // unordered_map<char,int>mp;
        // unordered_map<char,int>cp;
        // for(int i = 0 ; i < s.size() ; i++ ){
        //     mp[s[i]]++;
        // }
        // int count1 = mp.size();
        // for(int i = 0 ; i < t.size() ; i++ ){
        //     cp[t[i]]++;
        // }
        // int count2 = cp.size();
        // if( count1 != count2 ) return false;
        // return true;
        // for (int i = 0; i < s.size(); i++) {
        //     // If s[i] is empty (hasn't been assigned yet), store t[i] in the
        //     // map for it
        //     if (mp[s[i]] == '\0') {
        //         mp[s[i]] = t[i];
        //         if(mp.find(t[i]) != mp.end()){

        //         }
        //     } else {
        //         // If mp[s[i]] is not empty and mp[s[i]] != t[i], return false
        //         if (mp[s[i]] != t[i]) {
        //             return false;
        //         }
        //     }
        // }
        for (int i = 0; i < s.size(); i++) {
    // If s[i] is empty (hasn't been assigned yet), store t[i] in the map for it
    if (mp[s[i]] == '\0') {
        // Check if t[i] is already present in the map for any other key
        for (const auto& kv : mp) {
            if (kv.second == t[i]) {
                return false;  // t[i] already assigned to another key
            }
        }
        // Assign t[i] to mp[s[i]]
        mp[s[i]] = t[i];
    } else {
        // If mp[s[i]] is not empty and mp[s[i]] != t[i], return false
        if (mp[s[i]] != t[i]) {
            return false;
        }
    }
}


        return true;
    }
};