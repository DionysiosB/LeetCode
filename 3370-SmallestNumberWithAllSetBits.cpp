class Solution {
public:
    int smallestNumber(int n) {
        int res(0);
        while(n){res = 2 * res + 1; n /= 2;}
        return res;
    }
};
