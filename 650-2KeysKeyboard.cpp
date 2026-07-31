class Solution {
public:
    int minSteps(int n) {
        std::vector<int> v(n + 1, n);
        v[0] = v[1] = 0;

        for(int p = 1; p <= n; p++){
            for(int k = 2; k * p <= n; ++k){
                v[k * p] = std::min(v[k * p], v[p] + k);
            }
        }

        return v.back();
    }
};
