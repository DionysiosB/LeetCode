/** 
 * Definition of commonSetBits API.
 * int commonSetBits(int num);
 */

class Solution {
public:
    int findNumber() {
        long x(1), res(0);
        for(int p = 0; p < 31; p++){
            if(commonSetBits(x)){res += x;}
            x *= 2;
        }
        
        return res;
    }
};
