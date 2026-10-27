class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {

        int nrow = mat.size();
        int ncol = mat[0].size();

        std::unordered_map<int, int> rowmap, colmap, rowcnt, colcnt;
        for(int row = 0; row < nrow; row++){
            for(int col = 0; col < ncol; col++){
                rowmap[mat[row][col]] = row;
                colmap[mat[row][col]] = col;
            }
        }

        for(int row = 0; row < nrow; row++){rowcnt[row] = 0;}
        for(int col = 0; col < ncol; col++){colcnt[col] = 0;}

        int ans(-1);
        for(int p = 0; p < nrow * ncol; p++){
            ++rowcnt[rowmap[arr[p]]];
            ++colcnt[colmap[arr[p]]];
            if(rowcnt[rowmap[arr[p]]] >= ncol || colcnt[colmap[arr[p]]] >= nrow){ans = p; break;}
        }

        return ans;
    }
};
