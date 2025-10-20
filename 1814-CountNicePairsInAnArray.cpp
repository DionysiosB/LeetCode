class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        std::unordered_map<int, int> f;
        const int MOD = 1e9 + 7;
        int res(0);
        for(int p = 0; p < nums.size(); p++){
            int x = nums[p];
            std::vector<int> w;
            while(x){w.push_back(x % 10); x /= 10;}
            int r(0); for(int p = 0; p < w.size(); p++){r = 10 * r + w[p];}
            int val = nums[p] - r;
            res += (f.count(val) ? f[val] : 0); res %= MOD;
            ++f[val];
        }

        return res;
    }
};
