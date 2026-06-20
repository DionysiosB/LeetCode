class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9 + 7;
        std::vector<int> v;
        for(int p = 0; p < nums.size(); p++){
            int cs(0);
            for(int q = p; q < nums.size(); q++){
                cs += nums[q];
                v.push_back(cs);
            }
        }
        
        sort(v.begin(), v.end());
        int ans(0);
        for(int p = left - 1; p < right; p++){ans += v[p]; ans %= MOD;}
        return ans;
    }
};
