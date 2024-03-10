class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
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