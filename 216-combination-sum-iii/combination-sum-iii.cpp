#include <vector>

using namespace std;

class Solution {
private:
   
    void generatecombination(int k, int n, int start, vector<int>& current,
                             vector<vector<int>>& result) {
        if (k == 0 && n == 0) {
            result.push_back(current);
            return;
        }
        for (int i = start; i <= 9; i++) {
            current.push_back(i);
            generatecombination(k - 1, n - i, i + 1, current, result);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> current;
        vector<vector<int>> result;
        generatecombination(k, n, 1, current, result);
        return result;
    }
};