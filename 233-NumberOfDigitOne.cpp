class Solution {
    public:
        int countDigitOne(int n){
            int cnt = 0;
            for (long long p = 1; p <= n; p *= 10) {
                long long d = 10 * p;
                cnt += (n / d) * p + std::min(std::max(n % d - p + 1, 0LL), p);
            }

            return cnt;
        }   

};
