class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source == target){return 0;}

        std::unordered_map<int, std::vector<int>> m;
        for(int bus = 0; bus < routes.size(); bus++){
            for(int p = 0; p < routes[bus].size(); p++){
                int stop = routes[bus][p];
                m[stop].push_back(bus);
            }
        }

        std::queue<int> q; std::vector<bool> vis(routes.size(), 0);
        for(int p = 0; p < m[source].size(); p++){q.push(m[source][p]); vis[m[source][p]] = 1;}

        int cnt(1);
        while(!q.empty()){
            std::queue<int> nq;
            while(!q.empty()){
                int bus = q.front(); q.pop();
                for(int p = 0; p < routes[bus].size(); p++){
                    int stop = routes[bus][p];
                    if(stop == target){return cnt;}
                    for(int b = 0; b < m[stop].size(); b++){
                        int bus = m[stop][b];
                        if(vis[bus]){continue;}
                        vis[bus] = true;
                        nq.push(bus);
                    }
                }
            }
            ++cnt;
            q = nq;
        }

        return -1;
    }
};
