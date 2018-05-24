class Solution {
public:
    bool detectCapitalUse(std::string word) {
        
        long n = word.size();
        bool first(isupper(word[0])), all(1), none(1);
        for(long p = 1; p < n; p++){
            if(isupper(word[p])){none = 0;}
            else{all = 0;}
        }
        
        if(none || (first && all)){return true;}
        return false;
    }
};
