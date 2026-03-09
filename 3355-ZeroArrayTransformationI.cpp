class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {

        std::vector<int> v(nums.size() + 1, 0);
        for(int p = 0; p < queries.size(); p++){++v[queries[p][0]]; --v[queries[p][1] + 1];}
        for(int p = 1; p < v.size(); p++){v[p] += v[p - 1];}
        for(int p = 0; p < nums.size(); p++){if(v[p] < nums[p]){return false;}}
        return true;
    }
};
