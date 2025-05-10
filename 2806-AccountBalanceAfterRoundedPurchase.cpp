class Solution {
public:
    int accountBalanceAfterPurchase(int x){
        int y = 10 * ((x / 10) + (x % 10 >= 5));
        return 100 - y;
    }
};
