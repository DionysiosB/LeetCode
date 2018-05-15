class Solution {
public:
    long integerBreak(int n) {
        
        std::vector<long> f(n + 1, 0);
        f[0] = 0; f[1] = 1;
        for(int p = 2; p <= n; p++){
            for(int a = 1; a < p; a++){
                int b = p - a;
                long u = (a > f[a]) ? a : f[a];
                long v = (a > f[b]) ? b : f[b];
                f[p] = (f[p] > u * v) ? f[p] : (u * v);
            }
        }
        
        return f[n];
    }
};
