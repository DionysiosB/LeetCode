class Solution {
public:
    string finalString(string s) {
        std::string f("");
        for(int p = 0; p < s.size(); p++){
            if(s[p] == 'i'){std::reverse(f.begin(), f.end());}
            else{f += s[p];}
        }

        return f;
    }
}
