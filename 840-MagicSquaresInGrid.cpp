class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        
        const int mgs(15);
        int cnt(0);
        for(int row = 0; row + 2 < grid.size(); row++){
            for(int col = 0; col + 2 < grid[0].size(); col++){

                std::set<int> s;
                std::vector<int> rowsum(3, 0), colsum(3, 0);
                int diagsumA(0), diagsumB(0);

                bool magic(true);
                for(int p = 0; p < 3; p++){
                    for(int q = 0; q < 3; q++){
                        int cur = grid[row + p][col + q];
                        if(cur <= 0 || cur > 9){magic = false;}
                        if(s.count(cur)){magic = false;}
                        else{s.insert(cur);}

                        rowsum[p] += cur;
                        colsum[q] += cur;
                        diagsumA += (p == q) * cur;
                        diagsumB += (p + q == 2) * cur;
                    }
                }

                if(diagsumA != mgs || diagsumB != mgs){magic = false;}
                for(int p = 0; magic && p < 3; p++){if(rowsum[p] != mgs){magic = false;}}
                for(int p = 0; magic && p < 3; p++){if(colsum[p] != mgs){magic = false;}}
                cnt += magic;
            }
        }


        return cnt;
    }
};
