class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {

        const int MOD = 1e9 + 7;
        std::vector<int> v(high + 1, 0); v[0] = 1;
        int total(0);
        for(int p = 0; p < v.size(); p++){
            if(p >= zero){v[p] += v[p - zero]; v[p] %= MOD;}
            if(p >= one){v[p] += v[p - one]; v[p] %= MOD;}
            if(p >= low){total += v[p]; total %= MOD;}
        }

        return total;
    }
};
