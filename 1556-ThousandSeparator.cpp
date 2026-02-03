class Solution {
public:
    string thousandSeparator(int n) {

        if(!n){return "0";}
        std::string s("");
        int cnt(0);
        while(n){
            char d = '0' + (n % 10);
            n /= 10;
            std::string cur(1, d);
            s = d + s;
            ++cnt;
            if(n && cnt % 3 == 0){s = '.' + s;}
        }

        return s;
    }
};
