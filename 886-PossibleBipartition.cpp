class Solution {
public:

    void dfs(int node, const std::vector<std::vector<int>> &g, std::vector<int> &w, int cur, bool &possible){
        if(!possible){return;}
        w[node] = cur;
        for(int p = 0; p < g[node].size(); p++){
            int nxt = g[node][p];
            if(w[nxt] < 0){dfs(nxt, g, w, 1 - cur, possible);}
            else if(w[nxt] == 1 - cur){continue;}
            else{possible = false; return;}
        }

    }

    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        std::vector<int> r(n + 1, -1);
        std::vector<std::vector<int>> g(n + 1);
        for(int p = 0; p < dislikes.size(); p++){
            int x = dislikes[p][0]; int y = dislikes[p][1];
            g[x].push_back(y); g[y].push_back(x);
        }

        bool possible(true);
        for(int p = 1; p <= n; p++){
            if(r[p] >= 0){continue;}
            dfs(p,g,r,0,possible);
            if(!possible){return false;}
        }
        return true;
    }
};
