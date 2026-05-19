class Solution {
public:
    int numberOfSpecialChars(string word) {

        std::vector<bool> sv(26, 0), cv(26, 0);
        for(char c: word){
            if('a' <= c && c <= 'z'){sv[c - 'a'] = 1;}
            else if('A' <= c && c <= 'Z'){cv[c - 'A'] = 1;}
        }

        int cnt(0);
        for(int p = 0; p < sv.size(); p++){cnt += sv[p] && cv[p];}
        return cnt;
    }
};
