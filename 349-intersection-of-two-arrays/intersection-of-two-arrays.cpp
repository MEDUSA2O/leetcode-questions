class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        unordered_map<int, int> mp;
        int i = 0;
        int j = 0;
        vector<int> ans;
        for (auto it : nums1) {
            mp[it]++;
        }
        for (auto it : nums2) {
            mp[it]++;
        }
        for (auto [no, freq] : mp) {
            if (find(nums1.begin(), nums1.end(), no) != nums1.end() &&
                find(nums2.begin(), nums2.end(), no) != nums2.end()) {
                ans.push_back(no);
            }
        }

        return ans;
    }
};