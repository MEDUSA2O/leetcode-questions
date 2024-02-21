class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        long long int sum = 0;
        vector<int> temp;
        for (int j = 0; j < damage.size(); j++) {
            sum += damage[j];
            temp.push_back(damage[j]);
        }
        if (armor == 0)
            return sum + 1;
        sort(temp.begin(), temp.end());
        if (temp[damage.size() - 1] <= armor) {
            return sum - temp[damage.size() - 1] + 1;
        }
        return sum - armor + 1;
    }
};