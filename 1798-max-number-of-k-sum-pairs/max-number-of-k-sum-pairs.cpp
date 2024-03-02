class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0; 
        sort(nums.begin(), nums.end()); // Sort the vector to use binary search

        for(int i = 0; i < nums.size(); ++i) {
            auto it = lower_bound(nums.begin() + i + 1, nums.end(), k - nums[i]);
            if (it != nums.end() && *it == k - nums[i]) {
                nums.erase(it);
                nums.erase(nums.begin() + i);
                count++;
                i--; // Adjust index after erasing an element
            }
        }
        return count;
    }
};
