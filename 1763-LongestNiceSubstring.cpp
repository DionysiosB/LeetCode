class Solution {
public:
    string longestNiceSubstring(string s) {

        std::string res(""); int mxl(0);
        for(int start = 0; start < s.size(); start++){
            for(int len = 1; start + len <= s.size(); len++){
                std::vector<int> v(26, 0), w(26, 0);
                for(int p = start; p < start + len; p++){
                    if('a' <= s[p] && s[p] <= 'z'){v[s[p] - 'a'] = 1;}
                    if('A' <= s[p] && s[p] <= 'Z'){w[s[p] - 'A'] = 1;}
                }
                bool valid(true);
                for(int p = 0; valid && p < 26; p++){if(v[p] ^ w[p]){valid = false;}}
                if(valid && len > mxl){mxl = len; res = s.substr(start, len);}
            }
        }

        return res;
    }
};
