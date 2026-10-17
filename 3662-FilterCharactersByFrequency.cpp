class Solution {
public:
    string filterCharacters(string s, int k) {

        std::map<char, long> m;
        for(char c : s){++m[c];}

        std::string w("");
        for(char c : s){
            if(m[c] < k){w += c;}
        }

        return w;
    }
};
