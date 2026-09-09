class Solution {
public:
    int maxA(int n) {
        if(n <= 3){return n;}
        std::vector<int> f(n + 1, 0);
        for(int p = 1; p <= n; p++){f[p] = p;}
        for(int p = 3; p <= n; p++){
            for(int q = 3; q <= std::min(p, 6); q++){
                f[p] = std::max(f[p], (q - 1) * f[p - q]);
            }
        }

        return f.back();
    }
};
