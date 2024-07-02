class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
                int n = grid.size();
        int count = 0;

        // Convert each row to a string and store in a map with its frequency
        std::unordered_map<std::string, int> row_map;
        for (const auto& row : grid) {
            std::ostringstream oss;
            for (const auto& ele : row) {
                oss << ele << ",";
            }
            row_map[oss.str()]++;
        }

        // Convert each column to a string and compare with the map
        for (int j = 0; j < n; ++j) {
            std::ostringstream oss;
            for (int i = 0; i < n; ++i) {
                oss << grid[i][j] << ",";
            }
            count += row_map[oss.str()];
        }

        return count;
        
    }
};