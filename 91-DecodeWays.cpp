class Solution {
public:
    int numDecodings(string s) {

        if(s[0] == '0'){return 0;}
        int pprev(1), prev(1);
        for(size_t p = 1; p < s.size(); p++){
            int a = s[p - 1] - '0';
            int b = s[p] - '0';

            int cur(0);
            if(!a && !b){return 0;}
            else if(!a){cur = prev;}
            else if(!b){cur = (s[p - 1] <= '2') * pprev;}
            else{cur = prev + (10 * a + b <= 26) * pprev;}

            pprev = prev;
            prev = cur;
        }

        return prev;
    }
};
