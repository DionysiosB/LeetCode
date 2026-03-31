class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {

        std::map<char, long, std::greater<char> > m;
        for(long p = 0; p < s.size(); p++){++m[s[p]];}

        std::string ans("");
        while(!m.empty()){
            std::map<char, long>::iterator it = m.begin();
            char x = it->first;
            int curcnt = it->second;
            curcnt = (curcnt < repeatLimit ? curcnt : repeatLimit);
            m[x] -= curcnt;
            ans += std::string(curcnt, x);
            if(!m[x]){m.erase(x); continue;}
            ++it;
            if(it == m.end()){break;}
            x = it->first;
            ans += x;
            --m[x];
            if(!m[x]){m.erase(x);}
        }

        return ans;

    }
};
