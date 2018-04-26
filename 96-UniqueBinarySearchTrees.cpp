class Solution {
public:
    long long numTrees(long long n) {
        
        if(n <= 1){return 1;}
        std::vector<long long> f(n + 1, 0);
        f[0] = f[1] = 1;
        for(int p = 2; p <= n; p++){for(int q = 0; q < p; q++){f[p] += f[q] * f[p - 1 - q];}}
        return f[n];
    }
};
