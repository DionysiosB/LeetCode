class Solution {
public:

    void dfs(int node, const std::vector<std::vector<int> > &g, const std::vector<int> &dur, int cur, int &mx){
        mx = (mx > cur ? mx : cur);
        for(int p = 0; p < g[node].size(); p++){dfs(g[node][p], g, dur, cur + dur[node], mx);}
    }

    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        std::vector<std::vector<int> > g(n);
        for(int p = 0; p < n; p++){
            if(manager[p] < 0){continue;}
            g[manager[p]].push_back(p);
        }

        int cur(0), mx(0);
        dfs(headID, g, informTime, cur, mx);
        return mx;
    }
};
