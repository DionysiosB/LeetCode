class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        std::map<std::pair<int, int>, int> m;
        int cnt(0);
        for(int p = 0; p < dominoes.size(); p++){
            std::pair<int, int> x = (dominoes[p][0] < dominoes[p][1]) ? std::make_pair(dominoes[p][0], dominoes[p][1]) : std::make_pair(dominoes[p][1], dominoes[p][0]);
            if(m.count(x)){cnt += m[x];}
            ++m[x];
        }
        
        return cnt;
    }
};
