class Solution {
public:
    string getSmallestString(string s) {
        for(int p = 1; p < s.size(); p++){
            if(s[p - 1] % 2 != s[p] % 2){continue;}
            if(s[p - 1] > s[p]){char x = s[p - 1]; s[p - 1] = s[p]; s[p] = x; break;}
        }
        return s;
    }
};
