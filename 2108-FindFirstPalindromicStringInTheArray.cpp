class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int p = 0; p < words.size(); p++){
            if(isPalindrome(words[p])){return words[p];}
        }
        return "";
    }

    bool isPalindrome(std::string s){
        for(int p = 0; p < s.size() / 2; p++){
            if(s[p] != s[s.size() - 1 - p]){return false;}
        }

        return true;
    }
};
