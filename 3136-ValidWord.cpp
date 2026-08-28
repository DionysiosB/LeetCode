class Solution {
public:
    bool isValid(string word) {

        if(word.size() < 3){return false;}

        bool vowel(false), consonant(false);
        for(size_t p = 0; p < word.size(); p++){
            const char x = word[p];
            if('0' <= x && x <= '9'){continue;}
            else if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){vowel = true;}
            else if( ('b' <= x && x <= 'z') || ('B' <= x && x <= 'Z') ){consonant = true;}
            else{return false;}
        }

        return vowel && consonant;
    }
};
