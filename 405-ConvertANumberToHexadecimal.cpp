class Solution {
public:
    string toHex(long num) {
        if(num == 0){return "0";}
        
        std::vector<char> hv;
        for(long p = 0; p < 10; p++){hv.push_back('0' + p);}
        for(long p = 0; p < 6; p++){hv.push_back('a' + p);}
        
        
        std::vector<long> hex;
        bool neg = (num < 0);
        if(num < 0){num = -num;}
        while(num > 0){long digit = num % 16; hex.push_back(digit); num /= 16;}

        if(neg){
            while(hex.size() < 8){hex.push_back(0);}
            for(long p = 0; p < hex.size(); p++){hex[p] = 15 - hex[p];}
            ++hex[0]; long carry(0);
            for(long p = 0; p < hex.size(); p++){hex[p] += carry; carry = hex[p] / 16; hex[p] %= 16;}
        }

        
        std::string s; for(long p = hex.size() - 1; p >= 0; p--){s += hv[hex[p]];}
        return s;
    }
};
