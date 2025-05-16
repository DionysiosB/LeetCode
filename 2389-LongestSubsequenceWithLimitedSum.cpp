class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        std::vector<int> v(queries.size());
        for(int p = 0; p < queries.size(); p++){
            int q(queries[p]), cur(0), idx(0);
            for(int u = 0; u < nums.size(); u++){
                cur += nums[u];
                if(cur <= q){++idx;}
                else{break;}
            }
            v[p] = idx;
        }

        return v;
    }
};
