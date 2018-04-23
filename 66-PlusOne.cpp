class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {

        const int B = 10;
        bool needCarry(1);
        for(int p = 0; p < digits.size(); p++){if(digits[p] != B - 1){needCarry = 0; break;}}

        if(needCarry){
            digits[0] = 1;
            for(int p = 1; p < digits.size(); p++){digits[p] = 0;}
            digits.push_back(0);
        }
        else{
            int carry(1);
            for(int p = digits.size() - 1; p >= 0; p--){
                digits[p] += carry; carry = 0;
                if(digits[p] >= B){carry = digits[p] / B; digits[p] %= B;}
                else{break;}
            }
        }

        return digits;
    }
};
