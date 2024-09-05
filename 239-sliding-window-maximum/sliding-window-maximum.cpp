#pragma GCC optimize("Ofast")
#pragma GCC target("avx2,tune=native")

bool init() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    return true;
}

bool _ = init();

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        list<int>wind;
        for(int i = 0 ; i < nums.size() ; i++ ){
            while(!wind.empty() && nums[wind.back()] <= nums[i]){
                wind.pop_back();
            }
            wind.push_back(i);
            if(wind.front() <= i - k){
                wind.pop_front();
            }
            if(i >= k - 1){
                ans.push_back(nums[wind.front()]);
            }
        }
        return ans;
        
    }
};






















// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         list<int> window; // Stores the indices of the elements
//         vector<int> ans;
        
//         for (int i = 0; i < nums.size(); i++) {
//             // Remove elements from the back that are smaller than the current element
//             while (!window.empty() && nums[window.back()] <= nums[i]) {
//                 window.pop_back();
//             }
            
//             // Add current element's index to the back of the list
//             window.push_back(i);
            
//             // Remove the front element if it's out of the current window
//             if (window.front() <= i - k) {
//                 window.pop_front();
//             }
            
//             // Once we have a full window, add the front element (max of the window) to the result
//             if (i >= k - 1) {
//                 ans.push_back(nums[window.front()]);
//             }
//         }
        
//         return ans;
//     }
// };
