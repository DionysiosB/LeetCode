class Solution {
    typedef long long ll;
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        std::vector<ll> cs(nums.size()); cs[0] = nums[0];
        for(ll p = 1; p < nums.size(); p++){cs[p] = cs[p - 1] + nums[p];}

        std::vector<ll> v(queries.size());
        for(ll p = 0; p < queries.size(); p++){
            ll x = queries[p];
            if(x <= nums[0]){v[p] = cs.back() - x * nums.size();}
            else if(x >= nums.back()){v[p] = nums.size() * x - cs.back();}
            else{
                std::vector<int>::iterator it = std::upper_bound(nums.begin(), nums.end(), x);
                ll nl = std::distance(nums.begin(), it);
                ll nr = std::distance(it, nums.end());
                v[p] = (nl * x - cs[nl - 1]) +  ((cs.back() - cs[nl - 1]) - nr * x);
            }
        }

        return v;
    }
};
