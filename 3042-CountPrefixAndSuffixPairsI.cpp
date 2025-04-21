class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        
        int cnt(0);
        for(int p = 0; p < words.size(); p++){
            for(int q = p + 1; q < words.size(); q++){
                if(words[p].size() > words[q].size()){continue;}
                cnt += (words[q].substr(0, words[p].size()) == words[p] && words[q].substr(words[q].size() - words[p].size()) == words[p]);
            }
        }
        
        return cnt;
    }
};
