typedef long long ll;

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {

        const ll n = nums.size();
        std::vector<ll> v(n); for(ll p = 0; p < n; p++){v[p] = nums[p];}
        sort(v.begin(), v.end());
        for(ll p = 1; p < n; p++){v[p] += v[p - 1];}
        for(ll p = n - 1; p > 1; p--){
            if(v[p] < 2 * v[p - 1]){return v[p];}
        }

        return -1;
    }
};
