class Solution {
public:
    string addStrings(string num1, string num2) {

        std::reverse(num1.begin(), num1.end());
        std::reverse(num2.begin(), num2.end());

        std::string res;
        int cur(0);
        for(size_t p = 0; cur || p < num1.size() || p < num2.size(); p++){
            if(p < num1.size()){cur += (num1[p] - '0');}
            if(p < num2.size()){cur += (num2[p] - '0');}
            char digit = ((cur % 10) + '0');
            res = res + digit;
            cur /= 10;
        }

        std::reverse(res.begin(), res.end());
        return res;
    }
};
