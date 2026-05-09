class Solution {
public:
    string greatestLetter(string s) {

        std::vector<bool> v(26, 0), w(26, 0);
        int diff = 'a' - 'A';
        for(char x : s){
            if('A' <= x && x <= 'Z'){w[x - 'A'] = 1;}
            if('a' <= x && x <= 'z'){v[x - 'a'] = 1;}
        }
        for(int p = 25; p >= 0; p--){
            if(v[p] && w[p]){return std::string(1, (char)('A' + p));}
        }
        return "";
        
    }
};
