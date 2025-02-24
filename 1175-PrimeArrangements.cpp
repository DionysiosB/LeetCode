class Solution {
public:
    int numPrimeArrangements(int n) {
        std::vector<int> primes({2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97});
        std::vector<int> v(101, 0);
        for(int p = 0;  p < primes.size(); p++){v[primes[p]] = 1;}
        int cnt(0); for(int p = 1; p <= n; p++){cnt += v[p];}
        
        const long MOD = 1e9 + 7;
        long res(1);
        for(int p = 1; p <= cnt; p++){res *= p; res %= MOD;}
        for(int p = 1; p <= n - cnt; p++){res *= p; res %= MOD;}
        return (int) res;
    }
};
