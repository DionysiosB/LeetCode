class Solution {
public:
    string strWithout3a3b(int a, int b) {

        std::string s(a + b, '_');
        if(a > b){s[0] = 'a'; --a;}
        else{s[0] = 'b'; --b;}

        if(a + b == 0){return s;}

        if(a > b){s[1] = 'a'; --a;}
        else{s[1] = 'b'; --b;}

        for(long p = 2; p < s.size(); p++){
            if(s[p - 2] == s[p - 1]){
                if(s[p - 1] == 'a'){s[p] = 'b'; --b;}
                else{s[p] = 'a'; --a;}
            }
            else if(a > b){s[p] = 'a'; --a;}
            else{s[p] = 'b'; --b;}
        }

        return s;
    }
};
