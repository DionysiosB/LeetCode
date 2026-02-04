class Solution {
public:
    int countVowelSubstrings(string word) {
        int cnt(0);
        for(long p = 0; p < word.size(); p++){
            bool a(0), e(0), i(0), o(0), u(0);
            for(long q = p; q < word.size(); q++){
                if(word[q] == 'a'){a = 1;}
                else if(word[q] == 'e'){e = 1;}
                else if(word[q] == 'i'){i = 1;}
                else if(word[q] == 'o'){o = 1;}
                else if(word[q] == 'u'){u = 1;}
                else{break;}
                cnt += (a + e + i + o + u == 5);
            }
        }

        return cnt;
    }
};
