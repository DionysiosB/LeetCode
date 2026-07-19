class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        const int n = isConnected.size();
        std::vector<std::vector<int> > g(n);
        for(int row = 0; row < n; row++){
            for(int col = 0; col < n; col++){
                if(isConnected[row][col]){g[row].push_back(col);}
            }
        }

        int cnt(0);
        std::vector<bool> vis(n, 0);
        for(int p = 0; p < n; p++){
            if(vis[p]){continue;}
            dfs(p, g, vis);
            ++cnt;
        }

        return cnt;
    }

private:
    void dfs(int node, const std::vector<std::vector<int> > &g, std::vector<bool> &v){
        if(v[node]){return;}
        v[node] = true;
        for(int nxt : g[node]){dfs(nxt, g, v);}
        return;
    }
};
