class Solution {
public:
    int twoEggDrop(int n) {
        int res(1);
        for(int p = 1; p <= n; p++){
            if(p * (p + 1) / 2 >= n){return p;}
        }
        
        return -1;
    }
};
