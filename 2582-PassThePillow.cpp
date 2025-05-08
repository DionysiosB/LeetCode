class Solution {
public:
    int passThePillow(int n, int time) {
        int t = time / (n-1);
        time %= (n-1);
        return (t % 2) ? (n-time) : (1 + time);
    }
};
