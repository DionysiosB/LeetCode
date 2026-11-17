class Solution {
public:
    int numberOfWays(int n, int x) {

        //f[u] is the number of ways to express u as the sum of powers equal to x;
        //At every iteration, the f vector represents the number of ways each respective number can
        //be expressed as a x-th power of numbers up to p
        const long long MOD = 1e9 + 7;
        std::vector<long long> f(n + 1);
        f[0] = 1;
        for(long long p = 1; p <= n; p++){
            long long val = std::pow(p, x);
            if(val > n){break;}
            for(long long u = n; u >= val; u--){f[u] += f[u - val]; f[u] %= MOD;}
        }

        return (int)f[n];
    }
};
