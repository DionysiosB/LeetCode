class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

        std::vector<int> v(arr.size()); v[0] = arr[0];
        for(int p = 1; p < v.size(); p++){v[p] = v[p - 1] ^ arr[p];}
        std::vector<int> ans(queries.size());
        for(int p = 0; p < ans.size(); p++){
            int start = queries[p][0];
            int stop = queries[p][1];
            int prev = (start ? v[start - 1] : 0);
            ans[p] = v[stop] ^ prev;
        }

        return ans;
    }
};
