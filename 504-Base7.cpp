class Solution {
public:
    string convertToBase7(int num) {
        
        if(num == 0){return "0";}
        int sign = (num > 0) ? 1 : -1;
        num *= sign;
        
        std::string s("");
        while(num > 0){s = std::to_string(num % 7) + s; num /= 7;}
        if(sign < 0){s = "-" + s;}
        return s;
    }
};
