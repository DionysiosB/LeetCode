class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long mn, mx, ans;
        mn  = std::min(need1, need2);
        mx  = std::max(need1, need2);
        ans = (long long) need1 * cost1 + (long long) need2 * cost2;
        ans  = std::min(ans, mn * costBoth + (need1 - mn) * cost1 + (need2 - mn) * cost2);
        ans = fmin(ans, mx * costBoth);
        return ans;
    }
};
