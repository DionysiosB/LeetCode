class Solution {
public:
    bool isArmstrong(int n) {
        int len(0), x(n); while(x){x /= 10; ++len;}
        x = n; int total(0); while(x){int d(x % 10); total += pow(d, len) ; x /= 10;}
        return total == n;
    }
}
