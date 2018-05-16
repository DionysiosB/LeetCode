class Solution {
public:
    int hammingDistance(int x, int y) {
        int count(0);
        while(x > 0 || y > 0){count += (2 + (x - y) % 2) % 2; x /= 2; y /= 2;}
        return count;
    }
};
