class Solution {
public:
    int mostFrequentPrime(vector<vector<int>>& mat) {

        const int D = 8;
        const int nr = mat.size();
        const int nc = mat[0].size();
        const int B = pow(10, std::max(nr, nc)) + 7;


        std::vector<std::pair<int, int> > dir(8);
        dir[0] = std::make_pair(1, 0);
        dir[1] = std::make_pair(1, 1);
        dir[2] = std::make_pair(0, 1);
        dir[3] = std::make_pair(-1, 1);
        dir[4] = std::make_pair(-1, 0);
        dir[5] = std::make_pair(-1, -1);
        dir[6] = std::make_pair(0, -1);
        dir[7] = std::make_pair(1, -1);

        std::vector<int> vb(B, 1);
        for(int p = 2; p < B; p++){
            if(!vb[p]){continue;}
            for(int q = 2 * p; q < B; q += p){vb[q] = 0;}
        }
        for(int p = 0; p < 10; p++){vb[p] = 0;}

        std::map<int, int> f;
        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                for(int p = 0; p < dir.size(); p++){
                    int x(0), tr(row), tc(col);
                    while(0 <= tr && tr < nr && 0 <= tc && tc < nc){
                        x = 10 * x + mat[tr][tc];
                        if(vb[x]){++f[x];}
                        tr += dir[p].first;
                        tc += dir[p].second;
                    }
                }
            }
        }

        int res(-1), mxf(0);
        for(std::map<int, int>::iterator it = f.begin(); it != f.end(); it++){
            int prime = it->first;
            int freq = it->second;
            if(freq >= mxf){mxf = freq; res = prime;}
        }

        return res;
    }
};
