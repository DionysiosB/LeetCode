class Solution {
public:

    void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &vis, const long &dest){

        if(vis[node] || vis[dest]){return;}
        vis[node] = true;

        for(long p = 0; p < g[node].size(); p++){
            long nxt = g[node][p];
            if(vis[nxt]){continue;}
            dfs(nxt, g, vis, dest);
        }

        return;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        std::vector<std::vector<long> > g(n);
        for(long p = 0; p < edges.size(); p++){
            long x = edges[p][0];
            long y = edges[p][1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        std::vector<bool> vis(n, false);
        dfs(source, g, vis, destination);
        return vis[destination];
        
    }
};
