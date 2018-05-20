class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        if(num <= 1){return false;}
        int total(1);
        for(int p = 2; p * p <= num; p++){
            if(num % p != 0){continue;}
            total += p;
            int q = num / p;
            if(q != p){total += q;}
        }
        
        return (total == num);
    }
};
