class Solution {
public:
    string removeVowels(string s) {
        std::string vowels("aeiou");
        std::string res("");
        for(int p = 0; p < s.size(); p++){
            if(vowels.find(s[p]) == std::string::npos){res += s[p];}
        }

        return res;
    }
};
