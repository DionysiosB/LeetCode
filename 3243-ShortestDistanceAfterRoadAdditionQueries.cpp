class Solution {
public:

    int dfs(int node, const std::vector<std::vector<int> > &g, std::vector<int> &mv){
        if(node == g.size()){return 0;}
        int dist(g.size() + 1);
        for(int p = 0; p < g[node].size(); p++){
            int nxt = g[node][p];
            int tst(-1);
            if(mv[nxt] >= 0){tst = mv[nxt];}
            else{tst = dfs(nxt, g, mv);}
            dist = std::min(dist, tst);
        }

        mv[node] = 1 + dist;
        return mv[node];
    }

    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {

        std::vector<std::vector<int> > g(n);
        for(int p = 0; p + 1 < n; p++){g[p].push_back(p + 1);}

        std::vector<int> w(queries.size());
        for(int p = 0; p < queries.size(); p++){
            const int from = queries[p][0];
            const int to   = queries[p][1];
            g[from].push_back(to);
            std::vector<int> mv(n, -1); mv.back() = 0;
            w[p] = dfs(0, g, mv);
        }

        return w;
    }
};
