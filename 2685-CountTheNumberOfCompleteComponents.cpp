class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        int cnt(0);
        std::vector<std::set<int> > g(n);
        for(int p = 0; p < edges.size(); p++){
            int x = edges[p][0];
            int y = edges[p][1];
            g[x].insert(y);
            g[y].insert(x);
        }

        std::vector<bool> vis(n, false);
        for(long p = 0; p < n; p++){
            if(vis[p]){continue;}
            vis[p] = true;
            std::set<int> comp = g[p];
            comp.insert(p);
            bool full(true);
            for(std::set<int>::iterator it = g[p].begin(); it != g[p].end(); it++){
                int u = *it;
                vis[u] = true;
                std::set<int> cur = g[u];
                cur.insert(u);
                if(full && cur != comp){full = false;}
            }

            cnt += full;
        }

        return cnt;        
    }
};
