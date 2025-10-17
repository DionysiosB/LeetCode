class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        const long MOD = 1e9 + 7;
        std::vector<long> v(target + 1, 0);
        v[0] = 1;
        while(n--){
            std::vector<long> w(target + 1, 0);
            for(long p = 1; p <= target; p++){
                for(long d = 1; d <= k; d++){
                    if(p < d){break;}
                    w[p] += v[p - d];
                    w[p] %= MOD;
                }
            }
            v = w;
        }

        return v.back();
    }
};
