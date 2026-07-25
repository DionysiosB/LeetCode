class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {

        s += '.';
        int cnt(0);
        for(size_t p = 0; p < s.size(); p++){
            if(p == 0 || s[p - 1] != s[p]){
                if(cnt == k){return true;}
                cnt = 1;
            }
            else{++cnt;}
        }

        return false;        
    }
};
