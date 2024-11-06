bool isPalin(std::string s){
    for(int p = 0; 2 * p < s.size(); p++){
        if(s[p] != s[s.size() - 1 - p]){return false;}
    }
    return true;
}


class Solution {
public:
    bool validPalindrome(string s) {
        bool del(0);
        int left(0), right(s.size() - 1);

        bool rem(false);
        while(left < right){
            if(s[left] == s[right]){++left; --right;}
            else{rem = true; break;}
        }

        if(!rem){return true;}
        return isPalin(s.substr(left, right - left)) || isPalin(s.substr(left + 1, right - left));
    }
};
