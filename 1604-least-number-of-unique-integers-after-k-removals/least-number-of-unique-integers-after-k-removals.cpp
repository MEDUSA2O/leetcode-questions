class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for (auto i : arr) {
            mp[i]++;
        }
        vector<int> freq;
        for (auto i : mp) {
            freq.push_back(i.second);
        }
        sort(freq.begin(), freq.end());
        int elementsremoved = 0;
        for (int i = 0; i < arr.size(); i++) {
            elementsremoved += freq[i];
            if (elementsremoved > k) {
                return freq.size() - i;
            }
        }
        return 0;
    }
};