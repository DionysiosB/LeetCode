class Solution {
public:

void dfs(long row, long col, long R, long C, std::vector<std::vector<int> > &m, long &perim){

    if(row < 0 || row >= R || col < 0 || col >= C){return;}
    if(m[row][col] != 1){return;}
    m[row][col] = -1;

    if(row <= 0 || m[row - 1][col] == 0){++perim;}
    else if(m[row - 1][col] == 1){dfs(row - 1, col, R, C, m, perim);}

    if(row + 1 >= R || m[row + 1][col] == 0){++perim;}
    else if(m[row + 1][col] == 1){dfs(row + 1, col, R, C, m, perim);}

    if(col <= 0 || m[row][col - 1] == 0){++perim;}
    else if(m[row][col - 1] == 1){dfs(row, col - 1, R, C, m, perim);}

    if(col + 1 >= C || m[row][col + 1] == 0){++perim;}
    else if(m[row][col + 1] == 1){dfs(row, col + 1, R, C, m, perim);}

    return;
}
    int islandPerimeter(std::vector<std::vector<int>>& grid) {
        
        if(grid.size() <= 0){return 0;}
        long total(0);
        int R = grid.size(); int C = grid[0].size();
        for(long r = 0; r < R; r++){
            for(long c = 0; c < C; c++){
                if(grid[r][c] <= 0){continue;}
                long count(0);
                dfs(r, c, R, C, grid, count);
                total += count;
            }
        }
    
        return total;    
    }
};
