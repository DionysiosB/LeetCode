class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {

        std::vector<std::pair<int, int> > vd;
        vd.push_back(std::make_pair(0, 1));
        vd.push_back(std::make_pair(0, -1));
        vd.push_back(std::make_pair(1, 0));
        vd.push_back(std::make_pair(-1, 0));
        vd.push_back(std::make_pair(1, 1));
        vd.push_back(std::make_pair(1, -1));
        vd.push_back(std::make_pair(-1, 1));
        vd.push_back(std::make_pair(-1, -1));

        std::set<std::pair<int, int> > qs;
        for(int p = 0; p < queens.size(); p++){
            qs.insert(std::make_pair(queens[p][0], queens[p][1]));
        }

        std::vector<std::vector<int> > v;
        for(int p = 0; p < vd.size(); p++){
            int sr(vd[p].first), sc(vd[p].second);
            for(int p = 0; p < 8; p++){
                int row(king[0] + p * sr), col(king[1] + p * sc);
                if(qs.count(std::make_pair(row, col))){
                    std::vector<int> cur(2);
                    cur[0] = row; cur[1] = col; 
                    v.push_back(cur);
                    break;
                }
            }

        }

        return v;
    }
};
