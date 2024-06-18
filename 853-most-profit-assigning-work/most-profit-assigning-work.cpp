class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        unordered_map<int, int> mp;
        int maxprof = 0;
        
        // Step 1: Create a map for difficulty and profit
        for(int i = 0 ; i < difficulty.size() ; i++){
            mp[difficulty[i]] = max(mp[difficulty[i]], profit[i]);
        }
        
        // Step 2: Create a sorted list of difficulties
        sort(difficulty.begin(), difficulty.end());
        
        // Step 3: Update the profit array based on the difficulty map
        for(int i = 0; i < difficulty.size(); i++){
            profit[i] = mp[difficulty[i]];
        }
        
        // Step 4: Calculate the maximum profit for each worker
        for(int i = 0; i < worker.size(); i++){
            int bestProfit = 0;
            for(int j = 0; j < difficulty.size(); j++){
                if(worker[i] >= difficulty[j]){
                    bestProfit = max(bestProfit, profit[j]);
                } else {
                    break;
                }
            }
            maxprof += bestProfit;
        }
        
        return maxprof;
    }
};
