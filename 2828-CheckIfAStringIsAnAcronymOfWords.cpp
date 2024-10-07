class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        std::string f("");
        for(int p = 0; p < words.size(); p++){f += words[p][0];}
        return s == f;
    }
}
