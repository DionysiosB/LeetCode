class Solution {
public:
    int numberOfChild(int n, int k) {
        int res(0), dir(1);
        while(k--){
            res += dir;
            if(res >= n){dir = -1; res = n - 2;}
            else if(res < 0){dir = 1; res = 1;}
        }
        return res;
    }
};
