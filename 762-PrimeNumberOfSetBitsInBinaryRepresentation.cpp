class Solution {
public:
    
    bool isPrime(int n){
        return (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29 || n == 31 || n == 37);
    }
    
    int countPrimeSetBits(int left, int right) {
        
        int cnt(0);
        for(int p = left; p <= right; p++){
            int x(p), s(0);
            while(x){s += (x % 2); x /= 2;}
            cnt += isPrime(s);
        }
        
        return cnt;
    }
};
