class Solution {
public:
    int minBitFlips(int start, int goal) {
        int diff = start ^ goal;
        int cnt(0); while(diff){cnt += (diff & 1); diff /= 2;}
        return cnt;
    }
}
