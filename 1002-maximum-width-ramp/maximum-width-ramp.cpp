// class Solution {
// public:
//     int maxWidthRamp(vector<int>& nums) {
//         int w = 0;
//         for(int i = 0 ; i < nums.size() ; i++){
//             for(int j = i + 1 ; j < nums.size() ; j++ ){
//                 if(nums[j] >= nums[i]){
//                     w = max(w , j - i );
//                 }
//             }
//         }
//         return w;
        
//     }
// };
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;

        for (int i = 0; i < n; i++) {
            if (s.empty() || nums[s.top()] > nums[i]) {
                s.push(i);
            }
        }

        int maxWidth = 0;

        for (int j = n - 1; j >= 0; j--) {
            while (!s.empty() &&
                   nums[s.top()] <= nums[j]) {
                maxWidth = max(maxWidth, j - s.top());
                s.pop();
            }
        }

        return maxWidth;
    }
};