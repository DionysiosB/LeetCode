class Solution {
public:
    int minTimeToType(string word) {
        int cnt(word.size());
        for(int p = 0; p < word.size(); p++){
            int dist = word[p] - (p > 0 ? word[p - 1] : 'a');
            if(dist < 0){dist += 26;}
            if(dist > 13){dist = 26 - dist;}
            cnt += dist;
        }
        return cnt;
    }
};
