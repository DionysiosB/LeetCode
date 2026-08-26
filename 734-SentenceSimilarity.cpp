class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {

        if(sentence1.size() != sentence2.size()){return false;}

        const int n = sentence1.size();

        std::unordered_map<std::string, std::set<std::string> > wsm;
        for(std::vector<std::string> cpv : similarPairs){
            std::string x = cpv[0];
            std::string y = cpv[1];
            wsm[x].insert(y);
            wsm[y].insert(x);
        }

        for(int p = 0; p < n; p++){
            std::string x = sentence1[p];
            std::string y = sentence2[p];
            if(x == y){continue;}
            if(!wsm.count(x)){return false;}
            if(!wsm[x].count(y)){return false;}
        }

        return true;        
    }
};
