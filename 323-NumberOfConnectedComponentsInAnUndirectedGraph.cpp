class Solution {
public:

    void dfs(int node, const std::vector<std::vector<int>> &g, std::vector<bool> &v){
        if(v[node]){return;}
        v[node] = 1;
        for(int p = 0; p < g[node].size(); p++){
            int nxt = g[node][p];
            if(v[nxt]){continue;}
            dfs(nxt, g, v);
        }
    }

    int countComponents(int n, vector<vector<int>>& edges){
        std::vector<std::vector<int>> g(n);
        for(int p = 0; p < edges.size(); p++){
            int x = edges[p][0];
            int y = edges[p][1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        std::vector<bool> vis(n, 0);
        int cnt(0);
        for(int p = 0; p < n; p++){
            if(vis[p]){continue;}
            ++cnt;
            dfs(p, g, vis);
        }

        return cnt;
    }
};
