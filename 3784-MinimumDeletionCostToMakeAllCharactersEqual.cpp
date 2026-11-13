class Solution {
public:
    long long minCost(string s, vector<int>& cost) {

        const int B = 26;
        std::vector<long long> v(B, 0);
        long long total(0);
        for(int p = 0; p < s.size(); p++){
            v[s[p] - 'a'] += cost[p];
            total += cost[p];
        }

        long long mxc(0);
        for(int p = 0; p < B; p++){mxc = std::max(mxc, v[p]);}
        return (total - mxc);
    }
};
