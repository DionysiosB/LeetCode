class Solution {
public:
    string shortestSuperstring(string s1, string s2) {

        std::string w = s1 + s2;
        for(int p = 0; p < s1.size(); p++){
            int idx(0);
            for(int q = p; q < s1.size(); q++){
                if(s1[q] == s2[idx]){++idx;}
                else{idx = -1; break;}
                if(idx >= s2.size()){break;}
            }

            if(idx < 0){continue;}
            std::string tst = s1 + s2.substr(idx);
            w = (w.size() < tst.size() ? w : tst);
        }

        for(int p = 0; p < s2.size(); p++){
            int idx(0);
            for(int q = p; q < s2.size(); q++){
                if(s2[q] == s1[idx]){++idx;}
                else{idx = -1; break;}
                if(idx >= s1.size()){break;}
            }

            if(idx < 0){continue;}
            std::string tst = s2 + s1.substr(idx);
            w = (w.size() < tst.size() ? w : tst);
        }

        return w;
    }
};
