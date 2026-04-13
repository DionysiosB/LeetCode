class Solution {
public:
    char repeatedCharacter(string s) {

        std::set<char> v;
        for(size_t p = 0; p < s.size(); p++){
            if(v.count(s[p])){return s[p];}
            v.insert(s[p]);
        }
        return ' ';
    }
};
