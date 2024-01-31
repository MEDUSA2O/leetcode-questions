class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // int n = nums.size();
        // sort(nums.begin() , nums.end());
        // vector<int>ans;
        
        // for(int i = 0 ; i < n ; i++){
        //     int a = nums[i];
        //     int l = i+1;
        //     int r = n-1;
        //     if( a +nums[l]+nums[r] == 0 ) {
        //         ans = {a,l,r};
        //         return ans;
        //     }
        //     else if(  a + l + r > 0) {
        //         r--;
        //     }
        //     else{
        //         l++;
        //     }
        // }
        // return {0,0,0};
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {
            int a = nums[i];
            int l = i + 1;
            int r = n - 1;

            while (l < r) {
                int sum = a + nums[l] + nums[r];

                if (sum == 0) {
                    ans.push_back({a, nums[l], nums[r]});
                    l++;
                    r--;

                    // Avoid duplicate triplets
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                    while (l < r && nums[r] == nums[r + 1]) {
                        r--;
                    }
                } else if (sum > 0) {
                    r--;
                } else {
                    l++;
                }
            }

            // Avoid duplicate values for 'a'
            while (i < n - 2 && nums[i] == nums[i + 1]) {
                i++;
            }
        }

        return ans;
        
    }
};