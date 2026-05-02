class Solution {
public:
    string removeStars(string s) {

        std::vector<char> v;
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '*'){v.pop_back();}
            else{v.push_back(s[p]);}
        }

        std::string res("");
        for(int p = 0; p < v.size(); p++){res += v[p];}
        return res;
    }
};
