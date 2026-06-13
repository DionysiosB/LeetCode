class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        std::vector<std::vector<int> > gv(n);
        for(std::vector<int> edge : edges){gv[edge[1]].push_back(edge[0]);}
        std::vector<bool> vis(n, 0); std::vector<int> v;
        for(int p = 0; p < n; p++){if(!vis[p]){dfs(gv, p, vis, v);}}
        return v;
    }

private:
    void dfs(std::vector<std::vector<int> > &g, int node, std::vector<bool> &vis, std::vector<int> &ms){
        if(vis[node]){return;}
        vis[node] = 1;
        if(g[node].size() > 0){for(int nxt: g[node]){dfs(g, nxt, vis, ms);}}
        else{ms.push_back(node);}
    }
};
