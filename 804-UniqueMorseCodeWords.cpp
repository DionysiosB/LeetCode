std::vector<std::string> dict{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        std::set<std::string> s;
        for(int p = 0; p < words.size(); p++){
            std::string cur("");
            for(int u = 0; u < words[p].size(); u++){cur += dict[words[p][u] - 'a'];}
            s.insert(cur);
        }
        return s.size();
    }
};
