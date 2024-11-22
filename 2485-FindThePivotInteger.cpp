class Solution {
public:
    int pivotInteger(int n) {
        int x = sqrt((n * n + n) / 2);
        if(2 * x * x == n * n + n){return x;}
        return -1;
    }
};
