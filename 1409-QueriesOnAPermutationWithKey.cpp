class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {

        std::vector<int> v(m); std::iota(v.begin(), v.end(), 1);
        std::vector<int> ans(queries.size());

        for(int p = 0; p < queries.size(); p++){
            int x = queries[p];
            for(int u = 0; u < v.size(); u++){
                if(v[u] != x){continue;}
                ans[p] = u;
                v.erase(v.begin() + u);
                v.insert(v.begin(), x);
                break;
            }
        }

        return ans;
    }
};
