class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j && s[i] == s[j] ) {
            char temp = s[i];
            while(i<=j && s[i] == temp) i++;
            while(i<=j && s[j] == temp) j--;

        }

        return j - i + 1;
    }
};