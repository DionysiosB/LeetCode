class Solution {
public:

    void dfs(int node, const std::vector<std::vector<int> > &g, std::vector<bool> &vis){
        if(vis[node]){return;}
        vis[node] = true;
        for(int nxt : g[node]){dfs(nxt, g, vis);}
    }

    int makeConnected(int n, vector<vector<int>>& connections) {

        if(connections.size() < n - 1){return -1;}

        std::vector<std::vector<int> > g(n);
        for(long p = 0; p < connections.size(); p++){
            int x = connections[p][0];
            int y = connections[p][1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        std::vector<bool> vis(n, 0);
        long cnt(-1);
        for(long p = 0; p < n; p++){
            if(vis[p]){continue;}
            ++cnt;
            dfs(p, g, vis);
        }

        return cnt;
    }
};
