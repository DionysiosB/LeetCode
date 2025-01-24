class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        std::vector<std::pair<int, int> > w(mat.size());
        for(int row = 0; row < mat.size(); row++){
            int s(0);
            for(int col = 0; col < mat[0].size(); col++){s += mat[row][col];}
            w[row].first = s; w[row].second = row; 
        }
        sort(w.begin(), w.end());
        std::vector<int> res(k);
        for(int p = 0; p < k; p++){res[p] = w[p].second;}
        return res;
    }
};
