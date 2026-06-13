class Solution {
public:
    string removeOccurrences(string s, string part) {

        std::string w("");
        for(int p = 0; p < s.size(); p++){
            w += s[p];
            if(w.size() < part.size()){continue;}
            if(w.substr(w.size() - part.size(),part.size()) == part){w = w.substr(0, w.size() - part.size());}
        }

        return w;
    }
};
