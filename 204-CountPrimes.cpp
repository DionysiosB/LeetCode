class Solution {
public:
    int countPrimes(int n) {

        std::vector<bool> v(n, 1);
        v[0] = v[1] = 0;
        for(int p = 2; p * p < n; p++){
            if(!v[p]){continue;}
            for(int q = 2 * p; q < n; q += p){v[q] = 0;}
        }

        int total(0);
        for(int p = 2; p < n; p++){total += v[p];}
        return total;
    }
};
