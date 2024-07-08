class Solution {
public:
    int findTheWinner(int n, int k) {
           queue<int> q;
        // Fill the queue with numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            q.push(i);
        }
        
        // Simulate the process
        while (q.size() > 1) {
            // Move the first k-1 people to the end of the queue
            for (int i = 0; i < k - 1; ++i) {
                q.push(q.front());
                q.pop();
            }
            // Remove the k-th person
            q.pop();
        }
        
        // The last remaining person is the winner
        return q.front();
        
    }
}; 