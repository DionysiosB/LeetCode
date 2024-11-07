class Solution {
public:
    string reversePrefix(string word, char ch) {
        std::string a(""), b(word);
        for(int p = 0; p < word.size(); p++){
            if(word[p] == ch){
                a = word.substr(0, p + 1);
                b = word.substr(p + 1);
                break;
            }
        }

        std::reverse(a.begin(), a.end());
        return a + b;
    }
};
