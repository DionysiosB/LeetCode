class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        int idx(0), rem(k), mxcnt(0);
        for(int p = 0; p < answerKey.size(); p++){
            if(answerKey[p] == 'F'){--rem;}
            while(rem < 0 && idx < p){if(answerKey[idx++] == 'F'){++rem;}}
            int cnt = p - idx + 1;
            mxcnt = (mxcnt > cnt ? mxcnt : cnt);
        }

        idx = 0; rem = k;
        for(int p = 0; p < answerKey.size(); p++){
            if(answerKey[p] == 'T'){--rem;}
            while(rem < 0 && idx < p){if(answerKey[idx++] == 'T'){++rem;}}
            int cnt = p - idx + 1;
            mxcnt = (mxcnt > cnt ? mxcnt : cnt);
        }

        return mxcnt;
    }
};
