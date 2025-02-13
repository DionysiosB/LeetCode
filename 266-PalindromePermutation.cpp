class Solution {
public:
    bool canPermutePalindrome(string s) {
        std::vector<int> v(256, 0);
        for(int p = 0; p < s.size(); p++){++v[s[p]];}
        bool odd(false);
        for(int p = 0; p < v.size(); p++){
            if(odd & (v[p] % 2)){return false;}
            else if(v[p] % 2){odd = true;}
        }
        
        return true;
    }
};
