class Solution {
public:
    string reformat(string s) {

        std::vector<char> a, b;
        for(char x : s){
            if('0' <= x && x <= '9'){a.push_back(x);}
            else{b.push_back(x);}
        }

        std::string res("");
        if(a.size() > b.size()){
            res += a.back();
            a.pop_back();
            std::vector<char> x = a; a = b; b = x;
        }
        else if(a.size() < b.size()){res += b.back(); b.pop_back();}
        if(a.size() != b.size()){return "";}
        for(int p = 0; p < b.size(); p++){res += a[p]; res += b[p];}
        return res;
    }
};
