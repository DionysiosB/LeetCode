class Solution {
public:
    int totalReplacements(vector<int>& ranks) {

        long s(ranks[0]), cnt(0);
        for(long p = 1; p < ranks.size(); p++){
            cnt += (ranks[p] < s);
            s = (s < ranks[p] ? s : ranks[p]);
        }
        
        return cnt;
    }
};
