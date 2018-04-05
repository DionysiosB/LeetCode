#include <iostream>

class Solution{
    public:
        int mySqrt(int x){
            if(x < 0){return -1;}
            else if(x == 0){return 0;}

            double s(x);
            for(int p = 0; p < 10; p++){s = 0.5 * (s + x / s);}
            return s;
        }
};
