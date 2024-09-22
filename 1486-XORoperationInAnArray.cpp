class Solution {
public:
    int xorOperation(int n, int start) {
        int res(0);
        for(int p = 0; p < n; p++){res = res ^ (start + 2 * p);}
        return res;
    }
}
