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

        // Step 2: Create a vector of pairs (element, frequency)
        vector<pair<int, int>> freqVec;
        for (auto pair : freqMap) {
            freqVec.push_back(pair);
        }

        // Step 3: Sort the vector by frequency, and by value descending for same frequency
        sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        // Step 4: Reconstruct the sorted array based on the sorted frequency
        vector<int> result;
        for (auto& pair : freqVec) {
            result.insert(result.end(), pair.second, pair.first);
        }

        return result;
    }
};
