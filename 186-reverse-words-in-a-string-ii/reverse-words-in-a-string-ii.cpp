class Solution {
public:
    void reverseWords(vector<char>& s) {
        // Reverse the entire string
        reverse(s.begin(), s.end());

        int start = 0;
        int end = 0;
        int n = s.size();

        while (start < n) {
            // Find the end of the current word
            while (end < n && s[end] != ' ') {
                end++;
            }

            // Reverse the current word [start, end)
            reverse(s.begin() + start, s.begin() + end);

            // Move to the next word
            start = end + 1;
            end = start;
        }
    }
};
