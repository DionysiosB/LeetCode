class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        
        std::vector<std::vector<int> > g(vals.size());

        for(int p = 0; p < edges.size(); p++){
            int a = edges[p][0];
            int b = edges[p][1];
            if(vals[b] > 0){g[a].push_back(vals[b]);}
            if(vals[a] > 0){g[b].push_back(vals[a]);}
        }

        int ans(vals[0]);
        for(int p = 0; p < g.size(); p++){
            sort(g[p].rbegin(), g[p].rend());
            long long total(vals[p]);
            for(int q = 0; q < g[p].size() && q < k; q++){total += g[p][q];}
            ans = (ans > total ? ans : total);
        }

        return ans;
    }
};
