#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        for (int i = 0; i < difficulty.size(); i++) {
            jobs.emplace_back(difficulty[i], profit[i]);
        }

        // Sort jobs by difficulty
        sort(jobs.begin(), jobs.end());
        // Sort workers by their ability
        sort(worker.begin(), worker.end());

        int maxProfit = 0, best = 0, j = 0;
        for (int i = 0; i < worker.size(); i++) {
            while (j < jobs.size() && worker[i] >= jobs[j].first) {
                best = max(best, jobs[j].second);
                j++;
            }
            maxProfit += best;
        }

        return maxProfit;
    }
};
