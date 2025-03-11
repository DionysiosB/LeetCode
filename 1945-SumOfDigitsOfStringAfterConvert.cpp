class Solution {
public:
    int getLucky(string s, int k) {
        
        std::string t;
        for(int p = 0; p < s.size(); p++){
            int x = s[p] - 'a' + 1;
            t.push_back((char)('0' + x % 10)); t.push_back((char)('0' + x / 10));
        }
                
        while(k--){
            int total(0); std::string z;
            for(int p = 0; p < t.size(); p++){total += t[p] - '0';}
            std::cout << total << std::endl;
            while(total){z = (char)((total % 10) + '0') + z; total /= 10;}
            t = z;
        }

        int res(0);
        for(int p = 0; p < t.size(); p++){
            res = 10 * res + (t[p] - '0');
        }
        return res;
    }
};
