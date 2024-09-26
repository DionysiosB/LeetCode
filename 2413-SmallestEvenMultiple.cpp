class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n * (1 + n % 2);
    }
}
