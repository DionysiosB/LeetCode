class Solution {
public:
    bool judgeSquareSum(int c) {
        long d(c);
        long a(0), b(std::sqrt(d) + 7);
        while(a <= b){
            long tst = a * a + b * b;
            if(tst == d){return true;}
            else if(tst < d){++a;}
            else{--b;}
        }
        
        return false;
    }
};
