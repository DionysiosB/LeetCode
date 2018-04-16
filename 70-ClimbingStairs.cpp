class Solution {
public:
    long climbStairs(long n) {
        std::vector<long> f(n + 1, 0);
        f[0] = f[1] = 1;
        for(int p = 2; p <= n; p++){f[p] = f[p - 1] + f[p - 2];}
        return f[n];
    }
};
