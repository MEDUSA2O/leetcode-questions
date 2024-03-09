class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mp(nums1.begin(), nums1.end());
        for (auto it : nums2) {
            if (mp.contains(it)) {
                return it;
            }
        }
        return -1;
    }
};