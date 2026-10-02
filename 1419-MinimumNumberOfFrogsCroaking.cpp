class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {

        int cnt(0), c(0), r(0), o(0), a(0), k(0);
        for(char x : croakOfFrogs){
            if(x == 'c'){++c; cnt = std::max(cnt, c);}
            else if(x == 'r'){++r; cnt = std::max(cnt, r);}
            else if(x == 'o'){++o; cnt = std::max(cnt, o);}
            else if(x == 'a'){++a; cnt = std::max(cnt, a);}
            else if(x == 'k'){++k; cnt = std::max(cnt, k);}
            else{return -1;}
            if(c < r || c < o || c < a || c < k || r < o || r < a || r < k || o < a || o < k || o < k){return -1;}
            while(c && r && o && a && k){--c; --r; --o; --a; --k;}
        }

        if(c || r || o || a || k){return -1;}
        return cnt;
    }
};
