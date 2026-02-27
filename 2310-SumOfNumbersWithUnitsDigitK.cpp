class Solution {
public:
    int minimumNumbers(int num, int k) {
        long res(1);
        if(!num){return 0;}
        while(res < 10 && (num - k * res) % 10){++res;}
        num -= k * res;
        return ((num >= 0 && num % 10 == 0) ? res : -1);
    }
};
