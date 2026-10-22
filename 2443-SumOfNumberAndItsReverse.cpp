class Solution {
public:

    int reverse(int x){
        int y(0);
        while(x){y = 10 * y + (x % 10); x /= 10;}
        return y;
    }

    bool sumOfNumberAndReverse(int num) {

        for(int p = 0; p <= num; p++){
            if(num == p + reverse(p)){return true;}
        }
        return false;
    }
};
