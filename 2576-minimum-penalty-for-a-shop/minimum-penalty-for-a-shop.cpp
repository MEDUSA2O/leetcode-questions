class Solution {
public:
    int bestClosingTime(string customers) {
        int currpenalty = 0;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y') {
                currpenalty += 1;
            }
        }
        int minpenalty = currpenalty;
        int earlytime = 0;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y') {
                currpenalty--;
            } else {
                currpenalty++;
            }
            if (currpenalty < minpenalty) {
                minpenalty = currpenalty;
                earlytime = i + 1;
            }
        }
        return earlytime;
    }
};