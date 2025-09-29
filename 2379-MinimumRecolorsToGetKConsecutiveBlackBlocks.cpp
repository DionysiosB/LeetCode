class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        std::vector<int> v(n, 0);
        for(int p = 0; p < n; p++){v[p] = (p ? v[p - 1] : 0) + (blocks[p] == 'W');}
        int ans(v[k - 1]);
        for(int p = k; p < n; p++){
            int tst = v[p] - v[p - k];
            ans = (ans < tst ? ans : tst);
        }
        return ans;
    }
};
