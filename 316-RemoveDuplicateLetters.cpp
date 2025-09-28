class Solution {
public:
    string removeDuplicateLetters(string s) {
        std::vector<int>  v(26, 0);
        std::vector<bool> b(26, 0);
        std::string t("");
        for(int p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
        for(int p = 0; p < s.size(); p++){
            int idx = s[p] - 'a';
            --v[idx];
            if(!b[idx]){
                while(!t.empty() && t.back() > s[p] && v[t.back() - 'a']){
                    b[t.back() - 'a'] = 0;
                    t.pop_back();
                }
                t += s[p];
                b[idx] = 1;
            }
        }

        return t;
    }
};
