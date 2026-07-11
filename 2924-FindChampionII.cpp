class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {

        std::vector<int> v(n, 1);
        for(std::vector<int> edge : edges){v[edge[1]] = 0;}
        int res(-1);
        for(int p = 0; p < n; p++){
            if(!v[p]){continue;}
            else if(res >= 0){return -1;}
            res = p;
        }
        return res;
    }
};
