class Solution {
public:
    long trailingZeroes(long n) {
        const long FIVE = 5;
        long div = FIVE;
        long count(0);
        while(n / div > 0){count += n / div; div *= FIVE;}
        return count;
    }
};
