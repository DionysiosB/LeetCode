class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        std::queue<std::vector<int> > q;
        q.push(std::vector<int>(1, 0));

        std::vector<std::vector<int> > v;
        while(!q.empty()){
            std::vector<int> cur = q.front(); q.pop();
            int last = cur.back();
            for(int p = 0; p < graph[last].size(); p++){
                int nxt = graph[last][p];
                std::vector<int> w(cur); w.push_back(nxt);
                if(nxt == n - 1){v.push_back(w);}
                else{q.push(w);}
            }
        }

        return v;
    }
};
