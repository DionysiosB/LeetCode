class Solution {
public:
    int titleToNumber(string s) {
        const int N = 26;
        long num(0);
        long exp(1);
        for(int p = s.size() - 1; p >= 0; p--){
            num += (s[p] - 'A' + 1) * exp;
            exp *= N;
        }

        return num;
    }
};
