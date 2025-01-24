class Solution {
public:
    
    bool isVowel(char x){return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');}
    int vowelStrings(vector<string>& words, int left, int right) {
        int total(0);
        for(int p = left; p <= right; p++){total += (isVowel(words[p][0]) && isVowel(words[p].back()));}
        return total;
    }
};
