class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {

        int nr(img.size()), nc(img[0].size());
        std::vector<std::vector<int> > m(nr, std::vector<int>(nc, 0));

        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                int sum(0), cnt(0);
                for(int sr = -1; sr <= 1; sr++){
                    for(int sc = -1; sc <= 1; sc++){
                        int tr(row + sr), tc(col + sc);
                        if(tr < 0 || tr >= nr || tc < 0 || tc >= nc){continue;}
                        sum += img[tr][tc]; ++cnt;
                    }
                }
                m[row][col] = sum / cnt;
            }
        }
        
        return m;
    }
};
