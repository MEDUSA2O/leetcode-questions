#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freqmap;
        for (int num : nums) {
            freqmap[num]++;
        }
        sort(nums.begin() , nums.end() , [&](int a , int b){
            if(freqmap[a] != freqmap[b]){
                return freqmap[a]<freqmap[b];
            }
            return a > b;
        });
        return nums;

       
       
    }
};
