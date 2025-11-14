class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        long fives(0), tens(0);
        for(long p = 0; p < bills.size(); p++){
            if(bills[p] == 5){++fives;}
            else if(bills[p] == 10){--fives; ++tens;}
            else if(bills[p] == 20){
                if(tens > 0){--tens; --fives;}
                else{fives -= 3;}
            }

            if(fives < 0){return false;}
        }
        
        return true;
    }
};
