#include <unordered_map>
#include <string>
#include <algorithm>

class Solution {
public:
    int numberOfSpecialChars(std::string word) {
        std::sort(word.begin(), word.end());
        std::unordered_map<char, bool> mp; // Change the value type to bool to mark if the character has been counted
        if (word.size() == 0 || word.size() == 1)
            return 0;
        int i = 0;
        int j = 0;
        int count = 0;
        while (static_cast<int>(word[j]) < 97 && j < word.size()) {
            j++;
        }
        while (j != word.size()) {
            if (static_cast<int>(word[i] + 32) == static_cast<int>(word[j])) {
                if (!mp[word[i]]) { // Check if the character has not been counted before
                    count++;
                    mp[word[i]] = true; // Mark the character as counted
                }
                i++;
                j++;
            } else if (static_cast<int>(word[i] + 32) > static_cast<int>(word[j])) {
                j++;
            } else if (static_cast<int>(word[i]) == static_cast<int>(word[j])) {
                i++;
                j++;
            } else {
                i++;
            }
        }
        return count;
    }
};
