class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0){return 0;}
        else if(n == 1){return 1;}
        
        std::vector<int> v(n + 1, 0);
        int mx(0); v[0] = 0; v[1] = 1;
        for(int p = 2; p <= n; p++){
            v[p] = (p % 2 ? (v[p / 2] + v[(p + 1) / 2]) : v[p / 2]);
            mx = (v[p] > mx ? v[p] : mx);
        }
        return mx;
    }
};
