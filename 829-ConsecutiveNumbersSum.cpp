class Solution {
public:
    int consecutiveNumbersSum(int n) {

        int cnt(0);
        for(int p = 1; p * (p - 1) / 2 < n; p++){
            int t = p * (p - 1) / 2;
            if((n - t) % p){continue;}
            ++cnt;
        }

        return cnt;
        
    }
};
