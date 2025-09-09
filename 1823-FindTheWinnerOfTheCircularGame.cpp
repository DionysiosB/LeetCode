class Solution {
public:
    int findTheWinner(int n, int k) {
        int res(0);
        for(int p = 1; p <= n; p++){res = (res + k) % p;}
        return res + 1;
    }
};
