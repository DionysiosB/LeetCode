class Solution {
public:
    bool checkDivisibility(int n) {
        int x(n);
        int sum(0), prod(1);
        while(x){sum += (x % 10); prod *= (x % 10); x /= 10;}
        return !(n % (sum + prod));
    }
};
