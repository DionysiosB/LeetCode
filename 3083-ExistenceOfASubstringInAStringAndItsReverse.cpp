class Solution {
public:
    bool isSubstringPresent(string s) {
        
        std::set<std::string> t;
        for(int p = 0; p + 1 < s.size(); p++){
            std::string u = s.substr(p, 2);
            t.insert(u);
            std::reverse(u.begin(), u.end());
            if(t.count(u)){return true;}
        }
        
        return false;
    }
};
