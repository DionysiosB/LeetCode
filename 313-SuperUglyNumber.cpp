class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {

        sort(primes.begin(), primes.end());
        long cnt(0), res(0);
        std::set<long> s; s.insert(1);

        for(long p = 0; p < n; p++){
            res = *s.begin();
            for(long u = 0; u < primes.size(); u++){
                s.insert(res * primes[u]);
                if(s.size() + p > n + 7){s.erase(*s.rbegin());}
            }
            s.erase(res);
        }

        return res;
    }
};
