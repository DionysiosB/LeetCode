class Solution {
public:
    int minNumberOfPrimes(int n, int m) {
        
        const int B = 10007;
        std::vector<bool> isPrime(B, 1);
        isPrime[0] = isPrime[1] = 0;
        
        std::vector<int> v;
        for(int p = 2; p < B; p++){
            if(!isPrime[p]){continue;}
            v.push_back(p);
            if(v.size() >= m){break;}
            for(int q = 2 * p; q < B; q += p){isPrime[q] = 0;}
        }

        std::vector<int> w(n + 1, -1);
        w[0] = 0;
        for(long p = 0; p <= n; p++){
            if(w[p] < 0){continue;}
            for(int x : v){
                if(p + x > n){break;}
                if(w[p + x] < 0){w[p + x] = w[p] + 1;}
                else{w[p + x] = std::min(w[p + x], w[p] + 1);}
            }
        }

        return w.back();
    }
};
