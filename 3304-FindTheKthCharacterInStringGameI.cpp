class Solution {
public:
    char kthCharacter(int k) {

        std::string s("a");
        while(s.size() < k){
            std::string w(s);
            for(int p = 0; p < w.size(); p++){w[p] = (w[p] == 'z' ? 'a' : (w[p] + 1)); }
            s += w;
        }

        return s[k - 1];
    }
};
