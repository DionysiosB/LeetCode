class Solution {
public:

    long long modexp(long long a, long long b, long long mod){
        if(a < 0 || b < 0){return 0LL;}
        else if(!b){return 1;}
        else if(b == 1){return a % mod;}
        long long u = modexp(a, b / 2, mod);
        return ((u * u) % mod) * (b % 2 ? a : 1) % mod;
    }

    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {

        std::vector<int> v;
        for(int p = 0; p < variables.size(); p++){
            std::vector<int> w = variables[p];
            if(modexp(modexp(w[0], w[1], 10), w[2], w[3]) == target){v.push_back(p);}
        }

        return v;
    }
};
