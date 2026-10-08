class Solution {
public:
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {

        const int n = nums.size();
        const int m = queries.size();
        const int B = 101;
        std::vector<std::vector<int> > f(n, std::vector<int>(B, 0));

        for(int p = 0; p < n; p++){++f[p][nums[p]];}
        for(int p = 1; p < n; p++){
            for(int q = 0; q < B; q++){f[p][q] += f[p - 1][q];}
        }


        std::vector<int> v(m, -1);
        for(int q = 0; q < m; q++){
            int start = queries[q][0];
            int stop  = queries[q][1];

            int prev(0), mindiff(-1);
            for(int r = 1; r < B; r++){
                int before = (start ? f[start - 1][r] : 0);
                int after = f[stop][r];
                if(before == after){continue;}
                else if(prev){mindiff = std::min(mindiff > 0 ? mindiff : B, r - prev);}
                prev = r;
            }

            v[q] = mindiff;
        }

        return v;
    }
};
