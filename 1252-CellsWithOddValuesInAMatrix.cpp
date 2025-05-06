class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {

        std::vector<int> vr(m, 0), vc(n, 0);
        for(int p = 0; p < indices.size(); p++){
            ++vr[indices[p][0]];
            ++vc[indices[p][1]];
        }

        int cnt(0);
        for(int row = 0; row < m; row++){
            for(int col = 0; col < n; col++){
                cnt += (vr[row] + vc[col]) % 2;
            }
        }
        
        return cnt;
    }
};
