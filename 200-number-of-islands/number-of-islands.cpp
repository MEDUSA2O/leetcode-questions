class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1') {
                    count++;
                    sink(grid, i, j);
                }
            }
        }
        return count;
    }
    void sink(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() ||
            grid[i][j] != '1') {
            return;
        }
        grid[i][j] = '0';
        sink(grid, i + 1, j);
        sink(grid, i - 1, j);
        sink(grid, i, j - 1);
        sink(grid, i, j + 1);
    }
};
