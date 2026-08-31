class Solution {
public:

    long long mypow(long long base, long long n, long long mod){
        if(!n){return 1;}
        long long cur = mypow(base, n / 2, mod);
        long long res = ((cur * cur) % mod) * (n % 2 ? base : 1LL) % mod;
        return res;
    }


    int monkeyMove(int n) {
        const long long MOD = 1e9 + 7;
        long long x = mypow(2, n, MOD);
        return (x - 2 + MOD) % MOD;
    }
};
