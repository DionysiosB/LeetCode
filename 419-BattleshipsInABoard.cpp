class Solution {
public:

    void dfs(int row, int col, std::vector<std::vector<char>> &b){
        if(row < 0 || row >= b.size()){return;}
        if(col < 0 || col >= b[0].size()){return;}
        if(b[row][col] == '.'){return;}
        dfs(row + 1, col, b);
        dfs(row, col + 1, b);
        b[row][col] = '.';
    }

    int countBattleships(vector<vector<char>>& board) {
        int cnt(0);
        for(int row = 0; row < board.size(); row++){
            for(int col = 0; col < board[0].size(); col++){
                if(board[row][col] == '.'){continue;}
                ++cnt;
                dfs(row, col, board);
            }
        }

        return cnt;
    }
};
