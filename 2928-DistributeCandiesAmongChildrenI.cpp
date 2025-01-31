class Solution {
public:
    int distributeCandies(int n, int limit) {
        int cnt(0);
        for(int a = 0; a <= n && a <= limit; a++){
            for(int b = 0; a + b <= n && b <= limit; b++){
                int c = n - a - b;
                if(c <= limit){++cnt;}
            }
        }
        
        return cnt;
    }
};
