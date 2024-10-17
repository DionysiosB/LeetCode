int gcd(int a, int b){return b ? gcd(b, a % b) : a;}

class Solution {
public:
    int commonFactors(int a, int b) {
        int g = gcd(a, b);
        int cnt(0);
        for(int p = 1; p * p <= g; p++){
            if(g % p){continue;}
            cnt += 1 + (p * p < g);
        }

        return cnt;
    }
};
