class Solution {
public:
    int romanToInt(std::string s) {

        int idx(0); int res(0);
        while(idx < s.size()){
            char cur = s[idx];
            char nxt = (idx + 1 < s.size()) ? s[idx + 1] : '_';
            if(cur == 'I'){
                if(nxt == 'V'){res += 4; ++idx;}
                else if(nxt == 'X'){res += 9; ++idx;}
                else{res += 1;}
            }
            else if(cur == 'X'){
                if(nxt == 'L'){res += 40; ++idx;}
                else if(nxt == 'C'){res += 90; ++idx;}
                else{res += 10;}
            }
            else if(cur == 'C'){
                if(nxt == 'D'){res += 400; ++idx;}
                else if(nxt == 'M'){res += 900; ++idx;}
                else{res += 100;}
            }
            else if(cur == 'V'){res += 5;}
            else if(cur == 'L'){res += 50;}
            else if(cur == 'D'){res += 500;}
            else if(cur == 'M'){res += 1000;}
            ++idx;
        }

        return res;
        
    }
}
