// #include <string>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         vector<int> result;
//         unordered_map<char, int> pMap; // Frequency map for p
//         for (char c : p) {
//             pMap[c]++;
//         }

//         int count = pMap.size(); // Count variable to track unique characters
//         int left = 0, right = 0, windowSize = p.size();

//         // Traverse string `s` using sliding window
//         while (right < s.size()) {
//             // Process the right end of the window
//             if (pMap.find(s[right]) != pMap.end()) {
//                 pMap[s[right]]--;
//                 if (pMap[s[right]] == 0) {
//                     count--; // Character fully matched
//                 }
//             }

//             // Once window size matches p, check for anagram
//             if ((right - left + 1) == windowSize) {
//                 if (count == 0) {
//                     result.push_back(
//                         left); // Found an anagram at position `left`
//                 }

//                 // Slide the window by moving `left`
//                 if (pMap.find(s[left]) != pMap.end()) {
//                     if (pMap[s[left]] == 0) {
//                         count++; // Reintroduce the character back to the map
//                     }
//                     pMap[s[left]]++;
//                 }
//                 left++; // Move the left pointer
//             }

//             right++; // Move the right pointer
//         }

//         return result;
//     }
// };

#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int w = p.size();
        unordered_map<char, int> mp;
        for (char c : p) {
            mp[c]++;
        }
        int count = mp.size();
        int l = 0;
        int r = 0;
        while (r < s.size()) {
            if (mp.find(s[r]) != mp.end()) {
                mp[s[r]]--;
                if (mp[s[r]] == 0) {
                    count--;
                }
            }
            if ((r - l + 1) == w) {
                if (count == 0) {
                    ans.push_back(l);
                }
                if (mp.find(s[l]) != mp.end()) {
                    if (mp[s[l]] == 0) {
                        count++;
                    }
                    mp[s[l]]++;
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};
