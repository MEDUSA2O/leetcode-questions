class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long  s = 0;
        int n = nums.size();
        priority_queue<int>maxheap(nums.begin(),nums.end());
        for(int i = 0 ; i < k ; i++){
            int t = maxheap.top();
            maxheap.pop();
            s += t;
            maxheap.push(ceil( t / 3.0));
        }
        // for(int i = k ; i > 0 ; i--){
            
        //     sort(nums.begin(),nums.end());
        //     s += nums[n - 1];
        //     nums[n - 1] = ceil( nums[n -1] / 3.0);

        // }
        return s;
        
    }
};