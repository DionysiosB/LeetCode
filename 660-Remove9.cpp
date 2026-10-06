class Solution {
public:
    int newInteger(int n) {

        int ans(0);
        long long base(1);
        while(n){
            ans += (n % 9) * base;
            n /= 9;
            base *= 10;
        }

        return ans;
    }
};
