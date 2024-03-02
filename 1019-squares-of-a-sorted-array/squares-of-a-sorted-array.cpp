class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int square;
        for (int i = 0; i < n; i++) {
            square = nums[i] * nums[i];
            ans.push_back(square);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};