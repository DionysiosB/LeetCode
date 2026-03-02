class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        if(k < 2){return k;}
        int a(1), b(1);
        while(b <= k){int tmp = b; b += a; a = tmp;}
        return 1 + findMinFibonacciNumbers(k - a);
    }
};
