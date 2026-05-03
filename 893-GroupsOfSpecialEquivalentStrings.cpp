class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {

        std::set<std::pair<std::string, std::string> > s;
        for(std::string w : words){
            std::string a(""), b("");
            for(int p = 0; p < w.size(); p++){(p % 2) ? a.push_back(w[p]) : b.push_back(w[p]);}
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            s.insert(std::make_pair(a, b));
        }
        return s.size();
    }
};
