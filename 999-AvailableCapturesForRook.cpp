class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        std::vector<std::pair<int, int> > vd;
        vd.push_back(std::make_pair(0, 1));
        vd.push_back(std::make_pair(0, -1));
        vd.push_back(std::make_pair(1, 0));
        vd.push_back(std::make_pair(-1, 0));

        int kr(-1), kc(-1);
        for(int row = 0; kr < 0 && row < 8; row++){
            for(int col = 0; kc < 0 && col < 8; col++){
                if(board[row][col] == 'R'){kr = row; kc = col;}
            }
        }

        int cnt(0);
        for(int u = 0; u < vd.size(); u++){
            int sr(vd[u].first), sc(vd[u].second);
            for(int p = 1; p <= 8; p++){
                int row(kr + p * sr), col(kc + p * sc);
                if(row < 0 || row >= 8 || col < 0 || col >= 8){break;}
                if(board[row][col] == '.'){continue;}
                cnt += (board[row][col] == 'p');
                break;
            }
        }

        return cnt;
    }

};
