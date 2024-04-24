class Solution {
public:
    int arrangeCoins(int n) {
        long long nll = n;
        long long s = sqrt(1 + 8 * nll) / 2;
        while(s * (s + 1) / 2 <= nll){++s;}
        int res = s - 1;
        return res;
    }
};
