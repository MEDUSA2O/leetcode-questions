class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) { 
        int l = 0;
        int r = number.size() - 1;
        while (l < r) {
            if (number[l] + number[r] == target) {
                return {l + 1, r + 1};
            } else if (number[l] + number[r] > target) {
                r--;
            } else {
                l++;
            }
        }
        return {-1, -1};
    }
};