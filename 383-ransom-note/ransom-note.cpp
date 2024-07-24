class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> c(26, 0); // Initialize vector for frequency counts

        // Count frequencies of characters in magazine
        for (auto j : magazine) {
            c[j - 'a']++;
        }

        // Check if ransom note can be constructed from the magazine
        for (auto i : ransomNote) {
            if (--c[i - 'a'] < 0) {
                return false; // If count goes below zero, return false
            }
        }

        return true; // If all characters in ransom note are found in magazine
    }
};
