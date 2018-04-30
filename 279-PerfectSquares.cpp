class Solution {
public:
    long long numSquares(long long n) {
        std::vector<long long> count(n + 1, 0);
        for(long long p = 1; p <= n; p++){
            for(long long s = 1; s * s <= p; s++){
                if(count[p] == 0 || count[p - s * s] + 1 < count[p]){count[p] = count[p - s * s] + 1;}
            }
        }
        
        return count[n];
    }
};
