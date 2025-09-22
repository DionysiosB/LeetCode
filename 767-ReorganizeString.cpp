class Solution {
public:
    string reorganizeString(string s) {
        std::vector<std::pair<int, char> > v(26);
        for(size_t p = 0; p < s.size(); p++){++v[s[p] - 'a'].first;}
        for(size_t p = 0; p < 26; p++){v[p].second = (char)('a' + p);}
        sort(v.rbegin(), v.rend());
        std::string res(s.size(), '.');
        if(v[0].first > (s.size() + 1) / 2){return "";} 
        size_t idx(0);
        for(int p = 0; p < 26; p++){
            int cnt = v[p].first;
            if(cnt <= 0){break;}
            char c = v[p].second;
            while(cnt--){
                res[idx] = c;
                idx += 2; if(idx >= res.size()){idx = 1;}
            }
        }

        return res;


    }
};
