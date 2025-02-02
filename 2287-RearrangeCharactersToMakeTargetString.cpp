class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        std::vector<int> vs(26, 0), vt(26, 0);
        for(int p = 0; p < s.size(); p++){++vs[s[p] - 'a'];}
        for(int p = 0; p < target.size(); p++){++vt[target[p] - 'a'];}
        int res(s.size() / target.size());
        for(int p = 0; p < 26; p++){
            if(!vt[p]){continue;}
            int cur = vs[p] / vt[p];
            res = (res < cur ? res : cur);
        }
        
        return res;
    }
};
