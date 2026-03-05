class Solution {
public:
    int maxOperations(string s) {

        int cnt(0), a(0); bool f(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '0'){cnt += f * a; f = 0;}
            else{++a; f = 1;}
        }

        return cnt;
    }
};
