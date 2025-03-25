class Solution {
public:
    
    bool isVowel(char x){
        return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U';
    }
    
    bool halvesAreAlike(string s) {
        int n = s.size();
        int cnt(0);
        for(int p = 0; p < s.size(); p++){
            cnt += isVowel(s[p]) * ((p < n / 2) - (p >= n / 2));
        }
        
        return !cnt;
    }
};
