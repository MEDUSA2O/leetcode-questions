
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size() == 2){
            return skill[0] * skill[1];
        }

        int n = skill.size();
        int tot = accumulate(skill.begin(), skill.end(), 0);
        int target_energy = tot / (n / 2);
        long long tc = 0;
        
        sort(skill.begin(), skill.end());
        
        int left = 0;
        int right = n - 1;

        while (left < right) {
            int cs = skill[left] + skill[right];
            if (cs != target_energy) {
                return -1;
            }
            tc += (long long)skill[left] * (long long)skill[right];
            left++;
            right--;
        }

        return tc;
    }
};