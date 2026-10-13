class Solution {
public:

    int64_t dfs(int node, int from, const std::vector<std::vector<int> > &g, const std::vector<int> &cost, int &inc){

        int64_t mxc(0);
        int nc(0), add(0);
        for(int x : g[node]){
            if(x == from){continue;}
            int64_t cs = dfs(x, node, g, cost, inc);
            if(cs > mxc){add = nc;}
            else if(cs < mxc){++add;}
            ++nc;
            mxc = std::max(mxc, cs);
        }

        inc += add;
        return cost[node] + mxc;
    }


    int minIncrease(int n, vector<vector<int>>& edges, vector<int>& cost) {

        std::vector<std::vector<int> > g(n);
        for(std::vector<int> edge : edges){
            g[edge[0]].push_back(edge[1]);
            g[edge[1]].push_back(edge[0]);
        }

        int cnt(0);
        dfs(0, 0, g, cost, cnt);
        return cnt;
    }
};
