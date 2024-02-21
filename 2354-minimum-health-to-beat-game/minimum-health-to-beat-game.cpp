class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        long long int sum = 0;
        long long int max = INT_MIN;
        for (int j = 0; j < damage.size(); j++) {
            sum += damage[j];
            if (damage[j] > max) {
                max = damage[j];
            }
        }
        if (armor == 0)
            return sum + 1;
        if (max <= armor) {
            return sum - max + 1;
        }
        return sum - armor + 1;
    }
};