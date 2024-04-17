class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        for(long len = 1; len < s.size(); len++){
            if(s.size() % len){continue;}
            std::string q = s.substr(0, len); bool test(true);
            for(long p = 0; test && p < s.size(); p += len){
                std::string u = s.substr(p, len);
                //std::cout << "u:" << u << " q:" << q << std::endl;
                if(u != q){test = false;}
            }
            if(test){return true;}
        }

        return false;
    }
};
