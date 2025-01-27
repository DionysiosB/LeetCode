class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::vector<bool> v(26, 0);
        for(int p = 0; p < allowed.size(); p++){v[allowed[p] - 'a'] = 1;}
        int cnt(0);
        for(int p = 0; p < words.size(); p++){
            bool ok(true);
            for(int q = 0; ok && q < words[p].size(); q++){if(!v[words[p][q] - 'a']){ok = false;}}
            cnt += ok;
        }
        
        return cnt;
    }
};
