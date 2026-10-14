class Solution {
public:
    string processStr(string s) {

        std::string t("");
        for(char c : s){
            if('a' <= c && c <= 'z'){t += c;}
            else if(c == '*' && t.size()){t = t.substr(0, t.size() - 1);}
            else if(c == '#'){t += t;}
            else if(c == '%'){std::reverse(t.begin(), t.end());}
        }

        return t;
    }
};
