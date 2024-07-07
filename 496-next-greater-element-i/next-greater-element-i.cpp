class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>mp;
        for( auto n : nums2){

            while(!s.empty() && n > s.top()){
                mp[s.top()] = n;
                s.pop();  
            }
            s.push(n);
        }
        while(!s.empty()){
            mp[s.top()] = -1;
            s.pop();
        }
        vector<int>res(nums1.size());
        for( int i = 0 ; i < nums1.size() ; i++){
            res[i] = mp[nums1[i]];
        }
        return res;


        
    }
};