class Solution {
public:
    int numWays(int n, int k) {

        if(n == 1){return k;}
        else if(n == 2){return k * k;}
        int pprev(k), prev(k * k);
        
        int res(0);
        for(int p = 3; p <= n; p++){
            res = (k - 1) * (pprev + prev);
            pprev = prev; prev = res;
        }

        return res;
    }
};
