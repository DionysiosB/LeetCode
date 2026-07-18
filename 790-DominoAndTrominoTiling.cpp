class Solution {
public:
    int numTilings(int n) {

        const int MOD = 1e9 + 7;

        //f represents the state where both squares at that x are filled
        //g represents the state where the top square is filled, the bottom is not
        //h represents the state where the bottom square is filled, the top is not
        std::vector<int64_t> f(n + 1), g(n + 1), h(n + 1);
        f[0] = f[1] = 1;

        for(int p = 2; p <= n; p++){
            f[p] = f[p - 2] + f[p - 1] + g[p - 1] + h[p - 1]; f[p] %= MOD;
            g[p] = h[p - 1] + f[p - 2]; g[p] %= MOD;
            h[p] = g[p - 1] + f[p - 2]; h[p] %= MOD;
        }

        return (int) f.back();
    }
};
