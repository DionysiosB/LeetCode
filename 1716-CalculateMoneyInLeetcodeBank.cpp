class Solution {
public:
    int totalMoney(int n) {
        int w = (n / 7);
        int m = (n % 7);
        int total = 28 * w + 7 * w * (w - 1) / 2 + m * (m + 1) / 2 + m * w;
        return total;
    }
};
