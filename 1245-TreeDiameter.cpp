class Solution {
public:

    void dfs(int node, int from, const std::vector<std::vector<int> > &g, int dist, int &mxd, int &fn){
        const std::vector<int> v = g[node];
        if(dist > mxd){mxd = dist; fn = node;}
        for(int nxt : v){
            if(nxt == from){continue;}
            dfs(nxt, node, g, dist + 1, mxd, fn);
        }
    }

    int treeDiameter(vector<vector<int>>& edges) {

        std::vector<std::vector<int> > g(edges.size() + 1);
        for(int p = 0; p < edges.size(); p++){
            int x = edges[p][0];
            int y = edges[p][1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        int maxdist(-1), fn(-1);
        dfs(0, 0, g, 0, maxdist, fn);
        dfs(fn, fn, g, 0, maxdist, fn);
        return maxdist;
    }
};
