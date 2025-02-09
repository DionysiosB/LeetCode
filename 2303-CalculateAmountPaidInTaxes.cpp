class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double tax(0);
        for(int p = 0; income && p < brackets.size(); p++){
            int taxed = brackets[p][0] - (p > 0 ? brackets[p - 1][0] : 0);
            taxed = (taxed < income ? taxed : income);
            income -= taxed;
            tax += taxed * brackets[p][1] / 100.0;
        }
        
        return tax;
    }
};
