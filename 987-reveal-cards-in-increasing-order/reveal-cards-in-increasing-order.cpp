class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> ans(n, -1);
        queue<int> q;
        sort(deck.begin(), deck.end());

        // Populate the queue with indices from 0 to n-1
        for (int i = 0; i < n; ++i) {
            q.push(i);
        }
        
        // Variable to keep track of the starting index
        int startIdx = 0;
        
        // Iterate until the queue is empty
        while (!q.empty()) {
            int idx = q.front(); // Get the current index from the front of the queue
            q.pop(); // Remove the index from the queue
            ans[idx] = deck.front(); // Assign the value from the sorted deck to the current index
            deck.erase(deck.begin()); // Remove the front element from the sorted deck
            q.push(q.front()); // Move the front index to the back of the queue
            q.pop(); // Remove the front index from the queue
        }

        return ans;
    }
};
