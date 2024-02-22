class Solution {
public:
    int reverse(int x) {
        bool neg(x < 0); long y = neg ? (-1L * x) : x;
        long res(0);
        while(y){res *= 10; res += (y % 10); y /= 10;}
        if((res < -(1L << 31)) || (res + 1 > (1L << 31) ) ){return 0;}
        int ans = (neg ? -1 : 1) * res;
        return ans;
    }
};
