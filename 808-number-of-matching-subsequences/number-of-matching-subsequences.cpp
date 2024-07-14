#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        unordered_map<string, bool> memo;
        int count = 0;

        for (const string& word : words) {
            if (memo.find(word) != memo.end()) {
                if (memo[word]) {
                    count++;
                }
                continue;
            }

            if (isSubsequence(S, word)) {
                memo[word] = true;
                count++;
            } else {
                memo[word] = false;
            }
        }

        return count;
    }

private:
    bool isSubsequence(const string& S, const string& word) {
        int sLen = S.length(), wLen = word.length();
        int sIndex = 0, wIndex = 0;

        while (sIndex < sLen && wIndex < wLen) {
            if (S[sIndex] == word[wIndex]) {
                wIndex++;
            }
            sIndex++;
        }

        return wIndex == wLen;
    }
};
