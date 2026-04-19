class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {

        std::vector<int> v(26, 0);
        for(int p = 0; p < letters.size(); p++){++v[letters[p] - 'a'];}

        int mxs(0);
        for(int p = 1; p < (1 << words.size()); p++){
            std::vector<int> rem(v);
            int s(0), u(p);
            for(int q = 0; q < words.size(); q++){
                if(s < 0){break;}
                if(u % 2){
                    for(int r = 0; r < words[q].size(); r++){
                        int idx = words[q][r] - 'a';
                        if(rem[idx] > 0){s += score[idx]; --rem[idx];}
                        else{s = -1; break;}
                    }
                }
                u /= 2;
            }

            mxs = std::max(mxs, s);
        }
        
        return mxs;
    }
};
