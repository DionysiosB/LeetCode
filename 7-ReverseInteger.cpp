class Solution {
public:
    int reverse(int x) {
        int sign(1);
        if(x < 0){sign = -1; x = -x;}

        int rev(0);
        while(x > 0){
            rev = 10 * rev + (x % 10);
            x /= 10;
        }
        rev *= sign;

        return rev;
        
    }
};
