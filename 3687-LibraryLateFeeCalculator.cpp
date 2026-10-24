class Solution {
public:
    int lateFee(vector<int>& daysLate) {

        int total(0);
        for(int dl : daysLate){
            int mult(1);
            if(2 <= dl && dl <= 5){mult = 2;}
            else if(dl > 5){mult = 3;}
            total += dl * mult;
        }

        return total;
    }
};
