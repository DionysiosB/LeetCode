class Solution {
public:
    bool checkPowersOfThree(int n) {

        while(n){
            int d = n % 3;
            if(d > 1){return false;}
            n /= 3;
        }

        return true;
        
    }
};
