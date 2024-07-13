class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
         std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);
        unordered_map<int, int> index_map;
        for (int i = 0; i < positions.size(); ++i) {
            index_map[positions[i]] = i;
        }
        
        vector<int> stack; // Stack to keep track of robot indices
        
        sort(positions.begin(), positions.end()); // Sort positions
        
        for (int p : positions) {
            int i = index_map[p];
            if (directions[i] == 'R') {
                stack.push_back(i); // Push index of robot moving to the right
            } else {
                // Handle collisions with robots moving to the right
                while (!stack.empty() && directions[stack.back()] == 'R' && healths[i] > 0) {
                    int i2 = stack.back();
                    stack.pop_back();
                    if (healths[i] > healths[i2]) {
                        healths[i2] = 0;
                        healths[i] -= 1;
                    } else if (healths[i] < healths[i2]) {
                        healths[i] = 0;
                        healths[i2] -= 1;
                        stack.push_back(i2);
                    } else {
                        healths[i] = healths[i2] = 0;
                    }
                }
                if (healths[i] > 0) {
                    stack.push_back(i);
                }
            }
        }
        
        // Collect the healths of survived robots
        vector<int> result;
        for (int h : healths) {
            if (h > 0) {
                result.push_back(h);
            }
        }
        return result;
    }
};
