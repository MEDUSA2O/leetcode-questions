#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        map<int, int> freqMap;
        for (auto num : nums) {
            freqMap[num]++;
        }
        vector<pair<int, int>> freqVec;
        for (auto pair : freqMap) {
            freqVec.push_back(pair);
        }

        sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        vector<int> result;
        for (auto& pair : freqVec) {
            result.insert(result.end(), pair.second, pair.first);
        }

        return result;
    }
};
