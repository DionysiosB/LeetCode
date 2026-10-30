class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        std::vector<double> currRow(1, poured);
		
        for(int p = 0; p <= query_row; p++){
            std::vector<double> nextRow(p + 2, 0);
            for(int q=0; q <= p; q++){
                if(currRow[q] >= 1){
                    nextRow[q] += (currRow[q] - 1) / 2.0;
                    nextRow[q + 1] += (currRow[q] - 1) / 2.0;
                    currRow[q] = 1;
                }
            }
            if(p != query_row){currRow = nextRow;}
        }
        return currRow[query_glass];
    }
};
