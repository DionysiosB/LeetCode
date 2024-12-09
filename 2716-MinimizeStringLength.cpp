class Solution {
public:
    int minimizedStringLength(string s) {
        std::set<char> t;
        for(int p = 0; p < s.size(); p++){t.insert(s[p]);}
        return t.size();
    }
};
