class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {

        std::unordered_map<int, std::vector<int>> g;
        for(int p = 0; p < ppid.size(); p++){g[ppid[p]].push_back(pid[p]);}
        std::vector<int> v;
        std::queue<int> q; q.push(kill);
        while(!q.empty()){
            int node = q.front(); q.pop();
            v.push_back(node);
            for(int p = 0; p < g[node].size(); p++){q.push(g[node][p]);}
        }
        return v;
    }
};
