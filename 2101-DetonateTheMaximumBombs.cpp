class Solution {
public:

    int dfs(int node, const std::vector<std::vector<int> > &g, std::vector<bool> &vis){
        if(vis[node]){return 0;}
        vis[node] = true;
        int cnt(1);
        for(int p = 0; p < g[node].size(); p++){cnt += dfs(g[node][p], g, vis);}
        return cnt;
    }


    int maximumDetonation(vector<vector<int>>& bombs) {

        const int n = bombs.size();
        std::vector<std::vector<int> > g(n);
        for(int p = 0; p < n; p++){
            long long xs = bombs[p][0];
            long long ys = bombs[p][1];
            long long r = bombs[p][2];
            for(int q = 0; q < n; q++){
                if(q == p){continue;}
                long long xt = bombs[q][0];
                long long yt = bombs[q][1];
                if( (xs - xt) * (xs - xt) + (ys - yt) * (ys - yt) <= r * r){g[p].push_back(q);}
            }
        }


        int mxcnt(0);
        for(int p = 0; p < n; p++){
            std::vector<bool> vis(n, 0);
            int cnt = dfs(p, g, vis);
            mxcnt = std::max(mxcnt, cnt);
        }

        return mxcnt;        
    }
};
