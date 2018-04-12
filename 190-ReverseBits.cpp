class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        const int N = 32;
        std::vector<bool> bits(N, 0);
        for(int p = 0; p < N; p++){bits[p] = (n % 2); n /= 2;}
        uint32_t rev(0);
        for(int p = 0; p < N; p++){rev = 2 * rev + bits[p];}
        return rev;
    }
};
