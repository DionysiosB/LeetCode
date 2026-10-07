class Solution {
public:
    long long minCost(vector<int>& nums, int x) {

        const int n = nums.size();

        long long ans(0);
        for(int p = 0; p < n; p++){ans += nums[p];}

        for(long long rot = 1; rot < n; rot++){
            long long total(x * rot);
            std::vector<int> g(nums);
            for(int p = 0; p < n; p++){
                g[p] = std::min(nums[p], nums[(p + 1) % n]);
                total += g[p];
            }
            nums = g;

            ans = std::min(ans, total);
        }

        return ans;
    }
};
