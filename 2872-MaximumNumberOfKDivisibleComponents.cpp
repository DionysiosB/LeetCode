class Solution {
public:

    int dfs(int node, std::map<int, std::vector<int> > &g, const std::vector<int> &v, std::vector<bool> &vis, const int &k, int &cnt){

        if(vis[node]){return 0;}
        vis[node] = true;

        int ret(v[node] % k);
        for(int p = 0; p < g[node].size(); p++){
            int nxt = g[node][p];
            if(vis[nxt]){continue;}
            ret += dfs(nxt, g, v, vis, k, cnt);
            ret %= k;
        }

        cnt += !ret;
        return ret;
    }

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {

        std::map<int, std::vector<int> > g;
        for(int p = 0; p < edges.size(); p++){
            int x = edges[p][0];
            int y = edges[p][1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        int cnt(0);
        std::vector<bool> vis(n, 0);
        Solution::dfs(0, g, values, vis, k, cnt);
        return cnt;
    }
};
