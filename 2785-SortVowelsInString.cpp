class Solution {
public:
    
    bool isVowel(char x){
        return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
    }
    
    string sortVowels(string s) {
        std::multiset<char> ms;
        for(int p = 0; p < s.size(); p++){if(isVowel(s[p])){ms.insert(s[p]);}}
        for(int p = 0; p < s.size(); p++){if(isVowel(s[p])){char x = *ms.begin(); s[p] = x; ms.erase(ms.begin());}}
        return s;
    }
};
