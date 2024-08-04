class Solution {
public:
    int longestRepeatingSubstring(string s) {
        int length = s.length(), maxLength = 0;
        unordered_set<string> seenSubstrings;

        for (int start = 0; start < length; start++) {
            int end = start;

            if (end + maxLength >= length) {
                return maxLength;
            }
            string currentSubstring = s.substr(end, maxLength + 1);
            
            if (!seenSubstrings.insert(currentSubstring).second) {
                start = -1; 
                seenSubstrings.clear();
                maxLength++;
            }
        }
        return maxLength;
    }
};