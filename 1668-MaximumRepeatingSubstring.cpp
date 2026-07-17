class Solution {
public:
    int maxRepeating(string sequence, string word) {

        int mxr(0);
        for(size_t p = 0; p < sequence.size(); p++){
            int rep(0), idx(0);
            for(size_t q = p; q < sequence.size(); q++){
                if(sequence[q] != word[idx]){break;}
                ++idx;
                if(idx == word.size()){++rep; idx = 0;}
            }
            mxr = (mxr > rep ? mxr : rep);
        }

        return mxr;
    }
};
