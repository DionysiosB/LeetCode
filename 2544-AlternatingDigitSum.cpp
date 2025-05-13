class Solution {
public:
    int alternateDigitSum(int n) {
        int s(0), d(1);
        while(n){
            d = -d;
            s += d * (n % 10);
            n /= 10;
        }

        return d * s;
    }
};
