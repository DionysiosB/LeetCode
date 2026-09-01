class Solution {
public:
    int beautifulSubstrings(string s, int k) {

        std::map<int, std::vector<int> > m;
        m[0].push_back(0);
        long cs(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == 'a' || s[p] == 'e' || s[p] == 'i' || s[p] == 'o' || s[p] == 'u'){++cs;}
            else{--cs;}
            m[cs].push_back(p);
        }

        int cnt(0);
        for(std::map<int, std::vector<int> >::iterator it = m.begin(); it != m.end(); it++){
            std::vector<int> v = it->second;
            for(int p = 0; p < v.size(); p++){
                for(int q = p + 1; q < v.size(); q++){
                    int nv = (v[q] - v[p] + 1) / 2;
                    cnt += (nv * nv % k == 0);
                }
            }
        }
        
        return cnt;
    }
};
