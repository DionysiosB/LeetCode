class Solution {
public:
    int minChanges(int n, int k) {

        int cnt(0);
        while(n || k){
            int x = n % 2;
            int y = k % 2;
            cnt += (x > y);
            if(x < y){return -1;}
            n /= 2; k /= 2;
        }
        return cnt;
    }
};
