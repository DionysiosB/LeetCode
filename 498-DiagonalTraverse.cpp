class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        std::vector<int> v;
        const int nr = mat.size();
        const int nc = mat[0].size();

        for(int p = 0; p < nr + nc; p++){
            std::vector<int> w;
            for(int row = 0; row < nr; row++){
                int col = p - row;
                if(col < 0 || col >= nc){continue;}
                w.push_back(mat[row][col]);
            }
            if(p % 2 == 0){std::reverse(w.begin(), w.end());}
            for(int q = 0; q < w.size(); q++){v.push_back(w[q]);}
        }

        return v;
    }
};
