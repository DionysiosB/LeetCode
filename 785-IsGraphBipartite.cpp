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


    bool isBipartite(vector<vector<int>>& graph) {
        std::vector<int> r(graph.size(), -1);
        bool possible(true);
        for(int p = 0; p < graph.size(); p++){
            if(r[p] >= 0){continue;}
            dfs(p,graph,r,0,possible);
            if(!possible){return false;}
        }
        return true;
        
    }
};
