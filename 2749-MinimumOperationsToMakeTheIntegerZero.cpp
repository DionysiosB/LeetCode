class Solution {
public:

    int countones(long long x){
        int cnt(0);
        while(x){cnt += x % 2; x /= 2;}
        return cnt;
    }

    int makeTheIntegerZero(int num1, int num2) {

        for(long long k = 1; k <= 1e9; k++){
            long long diff = num1 - k * num2;
            if(diff < k){return -1;}
            else if(k >= countones(diff)){return k;}
        }

        return 0;
    }
};
