class Solution {
public:
    char kthCharacter(string s, long long k) {
        int rep(1); ++k;
        for(char c : s){
            if(c == ' '){k--; rep = 1;}
            else{k -= (rep++);}
            if(k <= 0){return c;}
        }

        return ' ';
    }
};
