class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> arrFreq;
        for (int num : arr) {
            arrFreq[num]++;
        }

        unordered_map<int, int> targetFreq;
        for (int num : target) {
            targetFreq[num]++;
        }

        if (arrFreq.size() != targetFreq.size()) {
            return false;
        }

        for (auto it : arrFreq) {
            if (targetFreq[it.first] != it.second) {
                return false;
            }
        }

        return true;
    }
};