class Solution {
public:
    double probabilityOfHeads(vector<double>& prob, int target) {
        
        const int n = prob.size();
        //Have to create one row of zeros, corresponding to no coins; The indexing is confusing
        std::vector<std::vector<double> > f(n + 1, std::vector<double>(target + 1));

        f[0][0] = 1;
        for(int coin = 1; coin <= n; coin++){f[coin][0] = (1.0 - prob[coin - 1]) * f[coin - 1][0];}
        for(int coin = 1; coin <= n; coin++){ 
            double cpb = prob[coin - 1];
            for(int heads = 1; heads <= coin && heads <= target; heads++){
                f[coin][heads] = cpb * f[coin - 1][heads - 1] + (1.0 - cpb) * f[coin - 1][heads];
            }
        }

        return f.back().back();
    }
};
