class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        s = "." + s;
        std::unordered_set<std::string> wd;
        for(int p = 0; p < wordDict.size(); p++){wd.insert(wordDict[p]);}

        std::vector<bool> f(s.size(), 0);
        f[0] = 1;
        for(long start = 1; start < s.size(); start++){
            if(!f[start - 1]){continue;}
            for(long stop = 1; stop < s.size(); stop++){
                std::string t = s.substr(start, stop - start + 1);
                if(wd.count(t)){f[stop] = 1;}
            }
        }

        return f.back();
    }
};
