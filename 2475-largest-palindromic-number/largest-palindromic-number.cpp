class Solution {
public:
    string largestPalindromic(string num) {
        vector<int>v(10);
        for(char c : num)v[c - '0']++;
        int single = -1;
        string ans;
        for(int i = 9 ; i >= 0 ; i--){
            if(ans.empty() && i == 0)continue;
           while(v[i] > 1){
                ans.push_back(i + '0');
                v[i] -= 2;
            }
            if(v[i] == 1 && single == -1 )single = i;
        }
        if(single == -1 && ans.empty() ) return "0";
        string res = string ( ans.rbegin() , ans.rend());
        if(single != -1){
            ans.push_back(single + '0');
        }
        ans += res;
        return ans;

        
    }
};