#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Step 1: Count the frequency of each element
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // Step 2: Sort the nums vector with a custom comparator
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            // If frequencies are different, sort by frequency
            if (freqMap[a] != freqMap[b]) {
                return freqMap[a] < freqMap[b];
            }
            // If frequencies are the same, sort by value descending
            return a > b;
        });

        return nums;
    }
};
