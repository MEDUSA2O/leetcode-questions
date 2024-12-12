class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int req = maxSum;
        int num = 0 ;
        for (int i = 1; i <= n; i++) {
            auto result =find(banned.begin(), banned.end(), i);
            if(result == banned.end() && i <= req){
                num++;
                req -= i;

            }
        }
        return num;
    }
};