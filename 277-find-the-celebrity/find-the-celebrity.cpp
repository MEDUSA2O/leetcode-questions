/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
private:
    int noofpeople;

public:
    int findCelebrity(int n) {
        noofpeople = n;
        int canbecelebrity = 0;

        // Find the candidate for the celebrity
        for (int i = 1; i < n; i++) {
            if (knows(canbecelebrity, i)) {
                canbecelebrity = i;
            }
        }

        // Verify if the candidate is actually a celebrity
        if (iscelebrity(canbecelebrity)) {
            return canbecelebrity;
        }

        return -1;
    }

private:
    bool iscelebrity(int i) {
        for (int j = 0; j < noofpeople; j++) {
            if (i == j) continue;
            if (knows(i, j) || !knows(j, i)) {
                return false;
            }
        }
        return true;
    }
};
