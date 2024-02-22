#include <vector>
using namespace std;

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        // If there are not enough relations to determine a judge, return -1
        if (trust.size() < N - 1) {
            return -1;
        }

        // Arrays to store the in-degrees and out-degrees for each person
        vector<int> indegrees(N + 1, 0);
        vector<int> outdegrees(N + 1, 0);

        // Populate the in-degrees and out-degrees arrays based on trust relations
        for (vector<int>& relation : trust) {
            outdegrees[relation[0]]++;
            indegrees[relation[1]]++; 
        }

        // Iterate over all people and find the potential judge
        for (int i = 1; i <= N; i++) {
            // Check if the person has N - 1 incoming edges and 0 outgoing edges
            if (indegrees[i] == N - 1 && outdegrees[i] == 0) {
                return i; // This person is a potential judge
            }
        }
        
        // No judge found
        return -1;
    }
};
