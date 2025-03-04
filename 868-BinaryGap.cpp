class Solution {
public:
    int binaryGap(int n) {
        int dist(-1), mx(0);
        while(n){
            if(dist >= 0){++dist;}
            if(n % 2){
                mx = (mx > dist ? mx : dist);
                dist = 0;
            }
            n /= 2;
        }
        
        return mx;
        
    }
};
