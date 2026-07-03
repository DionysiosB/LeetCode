class Solution {

private:
    long long modpow(long long b, long long x, long long m){
        if(x <= 0){return 1LL;}
        long long t = modpow(b, x / 2, m) % m;
        return (t * t % m * (x % 2 ? b : 1LL) % m);
    }

public:
    int countGoodNumbers(long long n) {
        const long long MOD = 1e9 + 7;
        return modpow(5, (n + 1) / 2, MOD) * modpow(4, n / 2, MOD) % MOD;
    }



};
