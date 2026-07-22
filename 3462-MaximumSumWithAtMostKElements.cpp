class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {

        std::vector<std::pair<int, int> > v;
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[0].size(); col++){
                if(grid[row][col] < 0){continue;}
                v.push_back(std::make_pair(grid[row][col], row));
            }
        }

        sort(v.rbegin(), v.rend());

        int rem(k);
        long long ans(0);
        for(long p = 0; rem && p < v.size(); p++){
            int num = v[p].first;
            int crow = v[p].second;
            if(limits[crow] <= 0){continue;}
            ans += num;
            --rem;
            --limits[crow];
        }

        return ans;
    }
};
