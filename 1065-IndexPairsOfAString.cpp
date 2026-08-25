class Solution {
public:
    vector<vector<int>> indexPairs(string text, vector<string>& words) {

        std::set<std::string> ws;
        for(std::string word : words){ws.insert(word);}


        std::vector<std::vector<int> > v;
        for(int p = 0; p < text.size(); p++){
            for(int len = 1; p + len <= text.size(); len++){
                std::string x = text.substr(p, len);
                if(ws.count(x)){v.push_back(std::vector<int>{p, p + len - 1});}
            }
        }

        return v;
    }
};
