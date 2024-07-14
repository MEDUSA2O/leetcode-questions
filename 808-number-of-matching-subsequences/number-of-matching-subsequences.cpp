#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        unordered_map<char, vector<int>> charIndices;
        int sLen = s.size();

        // Store the indices of each character in the string s
        for (int i = 0; i < sLen; i++) {
            charIndices[s[i]].push_back(i);
        }

        // Check each word in words
        for (const string& word : words) {
            int prevIndex = -1;
            bool isSubsequence = true;

            // Check if the word is a subsequence of s
            for (char c : word) {
                if (charIndices.find(c) == charIndices.end()) {
                    isSubsequence = false;
                    break;
                }

                // Find the first index in charIndices[c] that is greater than prevIndex
                auto it = upper_bound(charIndices[c].begin(), charIndices[c].end(), prevIndex);
                if (it == charIndices[c].end()) {
                    isSubsequence = false;
                    break;
                }

                prevIndex = *it;
            }

            // If the word is a subsequence, increment the count
            if (isSubsequence) {
                count++;
            }
        }
        return count;
    }
};
