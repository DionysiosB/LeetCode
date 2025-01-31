class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        
        std::map<int, int> m;
        int mxcnt(0);
        for(int p = lowLimit; p <= highLimit; p++){
            int x(p), sd(0);
            while(x){sd += x % 10; x /= 10;}
            ++m[sd];
            mxcnt = (mxcnt > m[sd] ? mxcnt : m[sd]);
        }
        
        return mxcnt;
    }
};
