class Solution {
public:

    int dfs(const std::vector<std::vector<int> > &g, int node, int from){

        const std::vector<int> v = g[node];

        int depth(-1);
        for(int x : v){
            if(x == from){continue;}
            depth = std::max(depth, dfs(g, x, node));
        }

        return 1 + depth;
    }

    int assignEdgeWeights(vector<vector<int>>& edges) {

        const int MOD = 1e9 + 7;
        const int n = edges.size() + 1;
        std::vector<std::vector<int> > g(n + 1);
        for(int p = 0; p < edges.size(); p++){
            int x = edges[p][0];
            int y = edges[p][1];
            g[x].push_back(y);
            g[y].push_back(x);
        }

        int mxd = dfs(g, 1, 1);

        //Find max depth, and the answer is (n choose 1) + (n choose 3) + ... + (n choose n - 1)
        //Which equals 2 ^ (n - 1)

        int cnt(1);
        for(long p = 1; p < mxd; p++){cnt *= 2; cnt %= MOD;}
        return cnt;
    }
};
