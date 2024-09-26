class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        std::vector<int> v;
        for(int p = 0; p < words.size(); p++){
            if(words[p].find(x) == std::string::npos){continue;}
            v.push_back(p);
        }
        return v;
    }
};
