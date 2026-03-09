class Solution {
public:

    int getProduct(int x){
        int prod(1);
        while(x){prod *= x % 10; x /= 10;}
        return prod;
    }

    int smallestNumber(int n, int t) {
        for(int p = n; p <= 10 * n; p++){
            if(getProduct(p) % t){continue;}
            return p;
        }

        return -1;
    }
};
