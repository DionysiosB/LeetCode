class Solution {
public:
    string replaceDigits(string s) {

        for(int p = 1; p < s.size(); p += 2){
            s[p] = (char)(s[p - 1] + (s[p] - '0'));
        }

        return s;
    }
};
