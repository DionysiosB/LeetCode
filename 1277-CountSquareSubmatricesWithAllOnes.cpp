class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {

        const int nr(matrix.size());
        const int nc(matrix[0].size());
        std::vector<std::vector<int> > h(matrix), v(matrix);
        for(int row = 0; row < nr; row++){
            h[row][0] = matrix[row][0];
            for(int col = 1; col < nc; col++){
                if(matrix[row][col]){h[row][col] = h[row][col - 1] + 1;}
                else{h[row][col] = 0;}
            }
        }

        for(int col = 0; col < nc; col++){
            v[0][col] = matrix[0][col];
            for(int row = 1; row < nr; row++){
                if(matrix[row][col]){v[row][col] = v[row - 1][col] + 1;}
                else{v[row][col] = 0;}
            }
        }

        int cnt(0);
        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                if(!matrix[row][col]){continue;}
                for(int p = 0; row + p < nr && col + p < nc; p++){
                    if((h[row + p][col + p] > p) && (v[row + p][col + p] > p)){++cnt;}
                    else{break;}
                }
            }
        }
       
        return cnt;
    }
};
