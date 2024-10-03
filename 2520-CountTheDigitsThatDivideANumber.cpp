class Solution {
public:
    int countDigits(int num) {
        int tmp(num), cnt(0);
        while(tmp){
            int d = tmp % 10;
            cnt += (num % d == 0);
            tmp /= 10;
        }

        return cnt;
    }
}
