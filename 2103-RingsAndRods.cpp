class Solution {
public:
    int countPoints(string rings) {

        std::vector<bool> r(10), g(10), b(10);

        for(int p = 1; p < rings.size(); p += 2){
            int pos = rings[p] - '0';
            int col = rings[p - 1];
            if(col == 'R'){r[pos] = 1;}
            else if(col == 'G'){g[pos] = 1;}
            else if(col == 'B'){b[pos] = 1;}
        }

        int cnt(0);
        for(int p = 0; p < 10; p++){cnt += (r[p] && g[p] && b[p]);}
        return cnt;
    }
};
