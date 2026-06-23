class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {

        std::string target("");
        abbr += '-';

        int cnt(0);
        for(char c : abbr){
            if(c == '0' && !cnt){return false;}
            else if('0' <= c && c <= '9'){
                cnt = 10 * cnt + (c - '0');
                if(cnt > word.size()){return false;}
            }
            else{
                while(cnt--){target += '.';}
                if(c != '-'){target += c;}
                cnt = 0;
            }
        }

        if(target.size() != word.size()){return false;}
        for(int p = 0; p < word.size(); p++){
            if(word[p] != target[p] && target[p] != '.'){return false;}
        }
        return true;
    }
};
