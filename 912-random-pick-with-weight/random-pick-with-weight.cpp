class Solution {
private:
    vector<int> v; // Cumulative sum array

public:
    Solution(vector<int>& w) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        // Initialize the cumulative sum array
        v.push_back(w[0]);
        for (int i = 1; i < w.size(); ++i) {
            v.push_back(v.back() + w[i]);
        }
    }

     int pickIndex() {
        int rand_weight = rand() % v.back(); // Generate a random weight

        // Manual binary search to find the first element greater than rand_weight
        int low = 0, high = v.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (v[mid] > rand_weight) {
                high = mid; // We are still in the correct range, but not confirmed yet
            } else {
                low = mid + 1; // Move the low up to mid + 1 because mid is definitely too low
            }
        }
        
        return low; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */