class Solution {
public:
    int smallestRepunitDivByK(int k) {

        int n(0);
        for(int p = 1; p <= k + 7; p++){
            n = (10 * n + 1) % k;
            if(n % k == 0){return p;}
        }

        return -1;
        
    }
};
