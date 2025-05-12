class Solution {
public:
    bool isThree(int n) {

        for(int p = 2; p * p <= n; p++){
            if(n % p){continue;}
            if(p * p != n){return false;}
            else{return true;}
        }

        return false;
    }
};
