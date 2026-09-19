class Solution {
public:
    bool isValid(string s) {

        std::string w("");
        for(int p = 0; p < s.size(); p++){
            w += s[p];
            if(w.back() != 'c'){continue;}
            const size_t n = w.size();
            if(n > 2 && w[n - 3] == 'a' && w[n - 2] == 'b' && w[n - 1] == 'c'){w = w.substr(0, n - 3);}
        }

        return w.empty();
    }
};
