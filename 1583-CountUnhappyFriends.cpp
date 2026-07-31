class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {

        std::map<int, int> m;
        for(int p = 0; p < pairs.size(); p++){
            m[pairs[p][0]] = pairs[p][1];
            m[pairs[p][1]] = pairs[p][0];
        }

        std::vector<std::vector<int> > ranks(n, std::vector<int>(n, -1));
        for(int row = 0; row < n; row++){
            for(int col = 0; col + 1 < n; col++){
                int pref = preferences[row][col];
                ranks[row][pref] = col;
            }
        }

        int cnt(0);
        std::vector<bool> cv(n, false);
        for(int p = 0; p < pairs.size(); p++){
            for(int q = 0; q < 2; q++){
                int x = pairs[p][q];
                int y = pairs[p][1 - q];
                if(cv[x]){continue;}
                std::vector<int> fpv = preferences[x];
                for(int cfr : fpv){
                    if(cfr == y){break;}
                    int other = m[cfr];
                    if(ranks[cfr][x] < ranks[cfr][other]){++cnt; break;}
                }
                cv[x] = true;
            }
        }

        return cnt;
    }
};
