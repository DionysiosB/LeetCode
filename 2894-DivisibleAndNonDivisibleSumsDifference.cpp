class Solution {
public:
    int differenceOfSums(int n, int m) {
        int div = (n / m);
        return (n * (n + 1)/2 - m * div * (div + 1));
    }
};
