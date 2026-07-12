class Solution {
public:
    int waysToDistribute(int n, int k) {

        //Key info: Every bag has to have at least one candy
        //f[nc][nb] = 0 if nc < nb (we need at least as many candies as bags)
        //f[nc][nb] = 1 if nc == nb (each candy in one bag)
        //f[nc][nb] = f[nc - 1][nb - 1] + nb * f[nc - 1][nb] -> First term if the last bag takes the last candy, second term if the
        //last candy is distributed to one of the already nonempty bags
        
        if(n < k){return 0;}
        else if(n == k){return 1;}


        const int MOD = 1e9 + 7;
        std::vector<std::vector<int> > f(n + 1, std::vector<int>(k + 1, 0));
        for(size_t p = 0; p <= k; p++){f[p][p] = 1;}

        for(size_t nc = 1; nc <= n; nc++){
            for(size_t nb = 1; nb < nc && nb <= k; nb++){
                f[nc][nb] = (f[nc - 1][nb - 1] + nb * f[nc - 1][nb]) % MOD;
            }
        }

        return f[n][k];
    }
};
