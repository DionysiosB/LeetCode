class Solution {
public:
    long dfs(long node, const std::vector<std::vector<long> > &g, long &mx, long &cnt){
        long prod(1), ret(1), total(g.size() - 1);
        for(long p = 0; p < g[node].size(); p++){
            long cur = dfs(g[node][p], g, mx, cnt);
            if(cur > 0){prod *= cur;}
            total -= cur; ret += cur;
        }
        if(total > 0){prod *= total;}
        if(prod > mx){mx = prod; cnt = 1;}
        else if(prod == mx){++cnt;}
        return ret;
    }

    int countHighestScoreNodes(vector<int>& parents) {
        std::vector<std::vector<long>> g(parents.size());
        long root(-1);
        for(long p = 0; p < parents.size(); p++){
            if(parents[p] < 0){root = p;}
            else{g[parents[p]].push_back(p);}
        }

        long mxp(0), cnt(0);
        dfs(root, g, mxp, cnt);
        return cnt;
    }
};
