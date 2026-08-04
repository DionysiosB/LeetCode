class Solution {
public:
    int getFood(vector<vector<char>>& grid) {

        std::queue<std::pair<int, int> > q;
        std::vector<std::vector<int> > m(grid.size(), std::vector<int>(grid[0].size(), 1e9));
        int minlen(grid.size() * grid[0].size());

        for(int row = 0; q.empty() && row < grid.size(); row++){
            for(int col = 0; q.empty() && col < grid[0].size(); col++){
                if(grid[row][col] == '*'){m[row][col] = 0; q.push(std::make_pair(row, col)); break;}
            }
        }

        bool found(false);
        while(!q.empty()){
            std::pair<int, int> where = q.front();
            q.pop();
            int row = where.first;
            int col = where.second;
            int length = m[row][col] + 1;

            if(row > 0 && grid[row - 1][col] != 'X'){
                if(grid[row - 1][col] == '#'){found = true; minlen = std::min(minlen, length);}
                else if(m[row - 1][col] > length){m[row - 1][col] = length; q.push(std::make_pair(row - 1, col));}
            }
            if(row + 1 < grid.size() && grid[row + 1][col] != 'X'){
                if(grid[row + 1][col] == '#'){found = true; minlen = std::min(minlen, length);}
                else if(m[row + 1][col] > length){m[row + 1][col] = length; q.push(std::make_pair(row + 1, col));}
            }
            if(col > 0 && grid[row][col - 1] != 'X'){
                if(grid[row][col - 1] == '#'){found = true; minlen = std::min(minlen, length);}
                else if(m[row][col - 1] > length){m[row][col - 1] = length; q.push(std::make_pair(row, col - 1));}
            }
            if(col + 1 < grid[0].size() && grid[row][col + 1] != 'X'){
                if(grid[row][col + 1] == '#'){found = true; minlen = std::min(minlen, length);}
                else if(m[row][col + 1] > length){m[row][col + 1] = length; q.push(std::make_pair(row, col + 1));}
            }
        }

        return found ? minlen : -1;        
    }
};
