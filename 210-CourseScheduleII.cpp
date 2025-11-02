class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        std::vector<std::vector<int>> g(n);
        std::vector<int> deg(n);
        for(int p = 0; p < pre.size(); p++){
            g[pre[p][1]].push_back(pre[p][0]);
            ++deg[pre[p][0]];
        }

        std::queue<int> q; std::vector<int> v;
        for(int p = 0; p < n; p++){if(!deg[p]){v.push_back(p); q.push(p);}}

        while(!q.empty()){
            int x = q.front(); q.pop();
            std::cout << "Node:" << x << std::endl;
            for(int p = 0; p < g[x].size(); p++){
                int to = g[x][p];
                --deg[to];
                if(!deg[to]){v.push_back(to); q.push(to);}
            }
        }

        if(v.size() < n){return std::vector<int>();}
        return v;
    }
};
