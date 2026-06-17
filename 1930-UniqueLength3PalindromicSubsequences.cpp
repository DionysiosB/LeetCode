class Solution {
public:
    int countPalindromicSubsequence(string s) {

        std::vector<int> start(26, -1), stop(26, -1);
        for(int p = 0; p < s.size(); p++){
            int x = s[p] - 'a';
            if(start[x] < 0){start[x] = p;}
            stop[x] = p;
        }

        int cnt(0);
        for(int p = 0; p < 26; p++){
            if(start[p] < 0 || start[p] == stop[p]){continue;}
            std::set<int> cs;
            for(int u = start[p] + 1; u < stop[p]; u++){cs.insert(s[u]);}
            cnt += cs.size();
        }

        return cnt;
    }
};
