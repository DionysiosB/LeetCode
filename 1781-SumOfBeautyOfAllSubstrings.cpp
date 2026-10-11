class Solution {
public:
    int beautySum(string s) {

        const int B = 26;
        int total(0);
        for(int p = 0; p < s.size(); p++){
            std::vector<int> f(B, 0);
            for(int q = p; q < s.size(); q++){
                ++f[s[q] - 'a'];
                int mnf(s.size()), mxf(0);
                for(int u = 0; u < B; u++){
                    if(!f[u]){continue;}
                    mxf = (mxf > f[u] ? mxf : f[u]);
                    mnf = (mnf < f[u] ? mnf : f[u]);
                }
                total += (mxf - mnf);
            }
        }

        return total;
    }
};
