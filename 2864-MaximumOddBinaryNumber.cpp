class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.rbegin(), s.rend());
        if(s.back() == '1'){return s;}
        
        s.back() = '1';
        for(int p = s.size() - 2; p >= 0; p--){if(s[p] == '1'){s[p] = '0'; break;}}
        return s;
    }
};
