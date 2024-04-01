class Solution {
public:
    int lengthOfLastWord(string s) {
        long long count = 0;
        int i = s.length();
        int j = i;
        while (j > 0 && s[j - 1] == ' ') {

            j--;
        }

        while (j > 0 && s[j - 1] != ' ') {
            count++;
            j--;
        }

        return count;
    }
};