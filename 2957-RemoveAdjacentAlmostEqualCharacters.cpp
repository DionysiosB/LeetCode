class Solution {
public:
    int removeAlmostEqualCharacters(string word) {

        int cnt(0);
        for(int p = 1; p < word.size(); p++){
            if(std::abs(word[p] - word[p - 1]) > 1){continue;}
            ++cnt;
            if(p + 1 >= word.size()){break;}
            
            for(char u = 'a'; u <= 'z'; u++){ //will never iterate more than 6 times
                if(std::abs(word[p - 1] - u) > 1 && std::abs(word[p + 1] - u) > 1){word[p] = u; break;}
            }
        }

        return cnt;
    }
};
