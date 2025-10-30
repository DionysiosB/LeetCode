class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(!n){return 1;}
        int a(10), c(9);
        for(int p = 2; p <= n; p++){c *= (11 - p); a += c;}
        return a;
    }
};
