class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        std::vector<bool> f(n * n + 1, 0);
        int g(-1);
        for(int row = 0; row < n; row++){
            for(int col = 0; col < n; col++){
                const int val = grid[row][col];
                if(f[val]){g = val;}
                else{f[val] = 1;}
            }
        }

        //Could just subtract the total sum from the overall sum, but maybe this doesn't fit in an int type
        std::vector<int> res; res.push_back(g);
        for(int p = 1; p <= n * n; p++){
            if(!f[p]){res.push_back(p); return res;}
        }

        return res;
    }
};
