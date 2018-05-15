class Solution {
public:
    long rob(vector<int>& v) {
        
        size_t n = v.size();
        if(n <= 0){return 0;}
        else if(n <= 1){return v[0];}
        
        std::vector<long> f(n);
        std::vector<long> g(n);
        
        f[0] = v[0]; g[0] = 0;
        for(int p = 1; p < n - 1; p++){
            f[p] = g[p - 1] + v[p];
            g[p] = (g[p - 1] > f[p - 1]) ? g[p - 1] : f[p - 1];
        }
        
        long ans = (f[n - 2] > g[n - 2]) ? f[n - 2] : g[n - 2];

        f[1] = v[1]; g[1] = 0;
        for(int p = 2; p < n; p++){
            f[p] = g[p - 1] + v[p];
            g[p] = (g[p - 1] > f[p - 1]) ? g[p - 1] : f[p - 1];
        }
        
        ans = (ans > f[n - 1]) ? ans : f[n - 1];
        ans = (ans > g[n - 1]) ? ans : g[n - 1];

        return ans;
    }
};
