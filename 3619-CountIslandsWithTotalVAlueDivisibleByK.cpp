class Solution {
public:

    long long dfs(std::pair<int, int> pos, std::vector<std::vector<int>> &g){
        const int row = pos.first;
        const int col = pos.second;
        if(row < 0 || row >= g.size() || col < 0 || col >= g[0].size() || !g[row][col]){return 0;}

        long long total(g[row][col]);
        g[row][col] = 0;
        total += dfs(std::make_pair(row - 1, col), g);
        total += dfs(std::make_pair(row + 1, col), g);
        total += dfs(std::make_pair(row, col - 1), g);
        total += dfs(std::make_pair(row, col + 1), g);
        return total;
    }


    int countIslands(vector<vector<int>>& grid, int k) {

        int cnt(0);
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[0].size(); col++){
                if(!grid[row][col]){continue;}
                long long sum = dfs(std::make_pair(row, col), grid);
                cnt += (sum % k == 0);
            }
        }

        return cnt;
    }
};
