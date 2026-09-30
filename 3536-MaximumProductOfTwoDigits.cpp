class Solution {
public:
    int maxProduct(int n) {
        int mxa(0), mxb(0);
        while(n){
            int x = (n % 10);
            n /= 10;

            if(x > mxa){mxb = mxa; mxa = x;}
            else if(x > mxb){mxb = x;}
        }

        return mxa * mxb;
    }
};
