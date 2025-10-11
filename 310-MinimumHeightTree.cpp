class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1){return std::vector<int>({0});}
        
        std::vector<std::set<int> > g(n);
        for(int p = 0; p < edges.size(); p++){
            int a = edges[p][0];
            int b = edges[p][1];
            g[a].insert(b);
            g[b].insert(a);
        }

        std::vector<int> lv;
        for(int p = 0; p < n; p++){if(g[p].size() == 1){lv.push_back(p);}}

        int rem(n);
        while(rem > 2){
            rem -= lv.size();
            std::vector<int> nlv;
            for(int p = 0; p < lv.size(); p++){
                int node = lv[p];
                int other = *(g[node].begin());
                g[node].erase(other);
                g[other].erase(node);
                if(g[other].size() == 1){nlv.push_back(other);}
            }

            lv = nlv;
        }

        return lv;
    }
};
