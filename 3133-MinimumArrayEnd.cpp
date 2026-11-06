class Solution {
public:
    long long minEnd(int n, int x){
        long long y(x);
        while(--n){y = (y + 1) | x;}
        return y;
    }
};
