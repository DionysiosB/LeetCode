class Solution {
public:
    string stringHash(string s, int k) {

        std::string res("");
        int cs(0);
        for(int p = 0; p < s.size(); p++){
            cs += (s[p] - 'a');
            if((p + 1) % k == 0){res += (char)('a' + (cs % 26)); cs = 0;}
        }
        return res;
    }
};
