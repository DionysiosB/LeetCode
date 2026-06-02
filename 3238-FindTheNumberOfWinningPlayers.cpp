class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {

        std::vector<std::vector<int> > bm(11, std::vector<int>(11, 0));
        for(int p = 0; p < pick.size(); p++){++bm[pick[p][0]][pick[p][1]];}
        int cnt(0);
        for(int p = 0; p < 11; p++){
            for(int b = 0; b < 11; b++){
                if(bm[p][b] > p){++cnt; break;}
            }
        }
        
        return cnt;
    }
};
