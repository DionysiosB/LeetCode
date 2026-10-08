class Solution {
public:
    long long minCuttingCost(long long n, long long m, long long k) {
        return (n > k) * k * (n - k) + (m > k) * k * (m - k);
    }
};
