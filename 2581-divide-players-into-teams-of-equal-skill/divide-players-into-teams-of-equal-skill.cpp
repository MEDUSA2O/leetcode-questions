class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size() == 2){
            return skill[0]*skill[1];
        }
        int n = skill.size();
        int tot = accumulate(skill.begin(), skill.end(), 0);
        int target_energy = tot/(n/2);
        long long tc = 0;
        sort(skill.begin(),skill.end());
        for(int i = 0 ; i < n/2 ; i++){
            int cs = skill[i] + skill[ n - i - 1];
            if(cs != target_energy){
                return -1;
            }
            tc += (long long)skill[i]*(long long)skill[n-i-1];

        }
        return tc;
    



    }
};