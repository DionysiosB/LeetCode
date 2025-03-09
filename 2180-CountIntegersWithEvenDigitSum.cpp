class Solution {
public:
    bool check(int x){
        int ds(0);
        while(x){ds += (x % 10); x /= 10;}
        return !(ds % 2);
    }
    
    int countEven(int num) {
        int cnt(0);
        for(int p = 2; p <= num; p++){cnt += check(p);}
        return cnt;
    }
};
