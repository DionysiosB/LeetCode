class Solution {
public:
    int numDifferentIntegers(string word) {

        word += 'a';
        std::set<std::string> ns;

        std::string cn("");
        for(int p = 0; p < word.size(); p++){
            if('a' <= word[p] && word[p] <= 'z'){
                if(!cn.empty()){ns.insert(cn);}
                cn = "";
            }
            else{
                if(cn.empty() && word[p] == '0' && p + 1 < word.size() && '0' <= word[p + 1] && word[p + 1] <= '9'){continue;}
                cn += word[p];
            }    
        }
    

        return ns.size();
    }
};
