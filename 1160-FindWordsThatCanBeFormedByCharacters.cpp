class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        std::vector<int> v(26); for(int p = 0; p < chars.size(); p++){++v[chars[p] - 'a'];}
        int cnt(0);
        for(int p = 0; p < words.size(); p++){
            std::vector<int> w(v);
            bool possible(true);
            for(int u = 0; possible && u < words[p].size(); u++){
                if(!w[words[p][u] - 'a']){possible = false;}
                --w[words[p][u] - 'a'];
            }
            cnt += possible * words[p].size();
        }
        
        return cnt;
    }
};
