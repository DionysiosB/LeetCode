class Solution {
public:
    long long removeZeros(long long n) {
        long long x(0);
        while(n){if(n % 10){x = 10 * x + n % 10;}; n /= 10;}
        while(x){n = 10 * n + (x % 10); x /= 10;}
        return n;
    }
};
