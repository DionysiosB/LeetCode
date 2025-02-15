class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        std::vector<int> posA, posB;
        for(int p = 0; p < wordsDict.size(); p++){
            if(wordsDict[p] == word1){posA.push_back(p);}
            if(wordsDict[p] == word2){posB.push_back(p);}
        }
                
        int mn(wordsDict.size());
        int idxA(0), idxB(0);
        while(idxA < posA.size() && idxB < posB.size()){
            int diff = std::abs(posA[idxA] - posB[idxB]);
            mn = (mn < diff ? mn : diff);
            if(posA[idxA] < posB[idxB]){++idxA;}
            else{++idxB;}
        }
        
        return mn;
    }
};
