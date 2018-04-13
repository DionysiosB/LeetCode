class Solution {
public:
    uint32_t hammingWeight(uint32_t n) {

        const int N = 32;
        int count(0);
        for(int p = 0; p < N; p++){count += (n % 2); n /= 2;}
        return count;
    }
};
