/**
 * Definition of commonBits API.
 * int commonBits(int num);
 */

class Solution {
public:
    int findNumber() {
        int res(0), d(commonBits(0));
        for (int p = 0; p < 30; p++) {
            int mult = (1 << p);
            commonBits(mult);
            if(d == commonBits(0) - 1){res ^= mult;}
            commonBits(mult);
        }
        return res;
    }
};
