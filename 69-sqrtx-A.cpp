class Solution{
    public:
        long mySqrt(long x){
            long s(0);
            while(s * s <= x){++s;}
            return (s - 1);
        }
};
