class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

        std::vector<int> mfv(26, 0);
        for(std::string w : words2){
            std::vector<int> cfv(26, 0);
            for(char c : w){++cfv[c - 'a'];}
            for(int p = 0; p < 26; p++){mfv[p] = std::max(mfv[p], cfv[p]);}
        }

        std::vector<std::string> res;
        for(std::string w : words1){
            std::vector<int> cfv(26, 0);
            for(char c : w){++cfv[c - 'a'];}
            bool universal(true);
            for(int p = 0; universal && p < 26; p++){
                if(cfv[p] < mfv[p]){universal = false;}
            }
            if(universal){res.push_back(w);}
        }

        return res;
    }
};
