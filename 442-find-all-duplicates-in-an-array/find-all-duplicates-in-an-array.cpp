class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;

        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            int n =
                abs(nums[i]); // Get the absolute value of the current element

            // If the element at position (n - 1) is negative, it means it has
            // been encountered before
            if (nums[n - 1] < 0) {
                res.push_back(n);
            } else {
                nums[n - 1] =
                    -nums[n - 1]; // Mark the element as seen by negating it
            }
        }

        return res;
    }
};
