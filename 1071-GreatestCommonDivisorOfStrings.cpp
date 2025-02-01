class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        std::string s("");
        int n(1);
        for(int p = 0; p < str1.size() && p < str2.size(); p++){
            if(str1[p] == str2[p]){n = p + 1;}
            else{break;}
        }
        
        for(int len = 1; len <= n; len++){
            if(str1.size() % len){continue;}
            if(str2.size() % len){continue;}
            std::string cand = str1.substr(0, len);
            bool tst(true);
            for(int p = 0; tst && p < str1.size(); p++){if(str1[p] != cand[p % len]){tst = false;}}
            for(int p = 0; tst && p < str2.size(); p++){if(str2[p] != cand[p % len]){tst = false;}}
            if(tst){s = cand;}
        }
        
        return s;
    }
};
