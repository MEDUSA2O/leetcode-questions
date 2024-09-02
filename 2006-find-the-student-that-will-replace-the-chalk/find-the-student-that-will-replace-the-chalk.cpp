class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for (auto i : chalk) {
            sum += i;
        }
        int m = k % sum;
        for (int i = 0 ; i < chalk.size() ; i++) {
            if (m < chalk[i]) {
                return i;
                
            }
            m = m - chalk[i];
        }
        return -1;
    }
};