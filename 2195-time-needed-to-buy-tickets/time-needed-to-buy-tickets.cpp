class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count = 0;
        if (k < 0 || k >= tickets.size()) {
            return -1; // Invalid index
        }

        while (tickets[k] != 0) {
            for (int i = 0; i < tickets.size(); i++) {
                if (tickets[i] != 0) {
                    tickets[i]--; // Decrement ticket count
                    count++;      // Increment purchase count
                }
                if (tickets[k] == 0) {
                    break; // No need to continue if tickets[k] is zero
                }
            }
        }
        return count;
    }
};