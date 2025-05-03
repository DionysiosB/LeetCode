class Solution {
public:
    vector<int> constructArray(int n, int k) {
        std::vector<int> ans(n);
        for (int p = 0, a = 1, z = k + 1; p <= k; p++){ans[p] = p % 2 ? z-- : a++;}
        for (int p = k + 1; p < n; p++){ans[p] = p + 1;}
        return ans;
    }
};
