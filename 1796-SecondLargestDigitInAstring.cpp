class Solution {
public:
    int secondHighest(string s) {
        
        int mx(-1), smx(-1);
        for(int p = 0; p < s.size(); p++){
            if('0' <= s[p] && s[p] <= '9'){
                int d = s[p] - '0';
                if(d > mx){smx = mx; mx = d;}
                else if(d < mx && smx < d){smx = d;}
            }
        }
        
        return smx;
    }
};
