class Solution {
public:
    long expressiveWords(string s, vector<string>& words) {
        
        std::vector<std::pair<char, long> > w;
        for(long p = 0; p < s.size(); p++){
            if(p == 0 || s[p] != s[p - 1]){w.push_back(std::make_pair(s[p], 1));}
            else{++w.back().second;}
        }
        
        long cnt(0);
        for(long u = 0; u < words.size(); u++){
            std::string cur = words[u];
            std::vector<std::pair<char, long> > cv;
            for(long p = 0; p < cur.size(); p++){
                if(p == 0 || cur[p] != cur[p - 1]){cv.push_back(std::make_pair(cur[p], 1));}
                else{++cv.back().second;}
            }
            
            if(cv.size() != w.size()){continue;}

            bool possible(true);
            for(long p = 0; p < w.size(); p++){
                if(cv[p].first != w[p].first){possible = false; break;}
                if(cv[p].second > w[p].second){possible = false; break;}
                if(cv[p].second == 1 && w[p].second == 2){possible = false; break;}
            }
            
            cnt += possible;
        }

        return cnt;

    }
};
