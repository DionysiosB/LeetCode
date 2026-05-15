class Solution {
public:
    string makeGood(string s) {
        
        std::string w("");
        for(int p = 0; p < s.size(); p++){
            if(w.empty()){w.push_back(s[p]);}
            else if(w.back() - s[p] == 'A' - 'a'){w.pop_back();}
            else if(w.back() - s[p] == 'a' - 'A'){w.pop_back();}
            else{w.push_back(s[p]);}
        }

        return w;
    }
};
