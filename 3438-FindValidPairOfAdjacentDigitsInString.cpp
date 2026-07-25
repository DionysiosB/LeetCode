class Solution {
public:
    string findValidPair(string s) {

        std::vector<int> f(10, 0);
        for(char x : s){++f[x - '0'];}
        for(int p = 0; p < 10; p++){f[p] = (p == f[p]);}
        for(int p = 1; p < s.size(); p++){
            if(s[p - 1] != s[p] && f[s[p - 1] - '0'] && f[s[p] - '0']){
                return s.substr(p - 1, 2);
            }
        }
        return "";
    }
};
