class Solution {
public:
    vector<string> expand(string s) {
        
        std::vector<std::vector<std::string> > v;
        int idx(0);
        while(idx < s.size()){
            if(s[idx] == '{'){
                std::vector<std::string> w;
                while(idx < s.size() && s[idx] != '}'){
                    if('a' <= s[idx] && s[idx] <= 'z'){w.push_back(std::string(1, s[idx]));}
                    ++idx;
                }
                v.push_back(w);
                ++idx;
            }
            else{
                std::string cs("");
                while(idx < s.size() && s[idx] != '{'){cs += s[idx]; ++idx;}
                v.push_back(std::vector<std::string>(1, cs));
            }
        }


        std::vector<std::string> res;
        res.push_back("");

        for(int p = 0; p < v.size(); p++){
            std::vector<std::string> nxtres;

            for(int u = 0; u < v[p].size(); u++){
                std::vector<std::string> cur = res;
                for(int q = 0; q < cur.size(); q++){cur[q] += v[p][u]; nxtres.push_back(cur[q]);}
            }

            res = nxtres;
        }

        sort(res.begin(), res.end());
        return res;
    }
};
