class Solution {
public:

    const int MOD = 1e9 + 7;

    long long dfs(int b, int n, const std::vector<std::vector<int> > &v, std::map<int, std::map<int, int> > &m){
        if(!n){return 1;}

        if(m.count(b) && m[b].count(n) ){return m[b][n];}

        long long total(0);
        for(int p = 0; p < v[b].size(); p++){total = (total + dfs(v[b][p], n - 1, v, m)) % MOD;}
        return m[b][n] = total;
    }

    int knightDialer(int n) {
        
        std::vector<std::vector<int> > v(10);
        v[0] = {4, 6};
        v[1] = {6, 8};
        v[2] = {7, 9};
        v[3] = {4, 8};
        v[4] = {0, 3, 9};
        v[5] = {};
        v[6] = {0, 1, 7};
        v[7] = {2, 6};
        v[8] = {1, 3};
        v[9] = {2, 4};


        int cnt(0);
        std::map<int, std::map<int, int> > m;
        for(int p = 0; p < 10; p++){cnt = (cnt + dfs(p, n - 1, v, m)) % MOD;}
        return cnt;
    }
};
