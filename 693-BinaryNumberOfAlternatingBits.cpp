class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool bit = (n % 2 == 0);
        while(n){
            if(n % 2 == bit){return false;}
            bit = n % 2;
            n /= 2;
        }

        return true;
    }
};
