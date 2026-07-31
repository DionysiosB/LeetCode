class Solution {
public:
    int smallestValue(int n) {

        while(n > 1){
            int cur(n), nxt(0);
            for(int p = 2; p * p <= cur; p++){
                while(cur % p == 0){cur /= p; nxt += p;}
            }

            nxt += (cur > 1) * cur;
            if(nxt == n){return n;}
            n = nxt;
        }

        return 1;
    }
};
