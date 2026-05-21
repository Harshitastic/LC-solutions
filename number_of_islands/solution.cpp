class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        // Base case: Check boundaries and water ('0')
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0') {
            return;
        }

        // Mark the current cell as visited
        grid[i][j] = '0';

        // Explore the neighbors (up, down, left, right)
        dfs(grid, i - 1, j); // up
        dfs(grid, i + 1, j); // down
        dfs(grid, i, j - 1); // left
        dfs(grid, i, j + 1); // right
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) {
            return 0;
        }

        int num_islands = 0;

        // Iterate through every cell in the grid
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == '1') {
                    ++num_islands; // Found a new island
                    dfs(grid, i, j); // Mark all connected land as visited
                }
            }
        }

        return num_islands;
    }
};
