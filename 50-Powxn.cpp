class Solution {
public:
    double myPow(double x, int n) {

        if(x == 0.0 || x == 1.0 || n == 1){return x;}
        else if(x == -1){return n % 2 ? -1.0 : 1.0;}
        else if(n == 0){return 1.0;}
        
        long w(n); if(w < 0){x = 1.0 / x; w = -w;}
        double res(1.0);

        double tmp = myPow(x, w / 2);
        return tmp * tmp * (w % 2 ? x : 1.0);
    }
}
