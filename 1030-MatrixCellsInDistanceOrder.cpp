class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int nr, int nc, int rCenter, int cCenter) {

        std::vector<std::pair<int, std::vector<int> > > v;
        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                int dist = std::abs(row - rCenter) + std::abs(col - cCenter);
                v.push_back(std::make_pair(dist, std::vector<int>({row, col})));
            }
        }

        sort(v.begin(), v.end());

        std::vector<std::vector<int> > w;
        for(int p = 0; p < v.size(); p++){w.push_back(v[p].second);}
        return w;
    }
};
