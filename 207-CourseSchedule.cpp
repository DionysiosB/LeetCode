class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        std::vector<std::vector<int> > g(numCourses);
        std::vector<int> sv(numCourses, 0);
        for(std::vector<int> pr : prerequisites){g[pr[0]].push_back(pr[1]);}
        for(int p = 0; p < numCourses; p++){if(hasCycle(p, g, sv)){return false;}}
        return true;
    }

    bool hasCycle(int node, std::vector<std::vector<int> > &g, std::vector<int> &v){
        if(v[node] == 1){return true;}
        if(v[node] == 2){return false;}

        v[node] = 1;
        for(int nxt : g[node]){if(hasCycle(nxt, g, v)){return true;}}
        v[node] = 2;
        return false;
    }
};
