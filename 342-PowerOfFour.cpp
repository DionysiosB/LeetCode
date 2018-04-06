class Solution{
    public:
        bool isPowerOfFour(long n){
            if(n <= 0){return false;}
            while(n > 1){
                if(n % 4){return false;}
                n /= 4;
            }
            return true;
        }
};
