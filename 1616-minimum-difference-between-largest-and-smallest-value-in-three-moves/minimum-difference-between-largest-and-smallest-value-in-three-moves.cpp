class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size() <= 3) return 0;
        
        // Sort the array
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        // We consider four scenarios:
        // 1. Remove the 3 largest elements.
        // 2. Remove the 2 largest elements and the smallest element.
        // 3. Remove the largest element and the 2 smallest elements.
        // 4. Remove the 3 smallest elements.
        // These scenarios will help in finding the minimum difference after removing up to 3 elements.

        int option1 = nums[n - 4] - nums[0];
        int option2 = nums[n - 3] - nums[1];
        int option3 = nums[n - 2] - nums[2];
        int option4 = nums[n - 1] - nums[3];
        
        // The answer is the minimum of these options.
        return min({option1, option2, option3, option4});
        
    }
};