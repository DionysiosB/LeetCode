class Solution {
public:
    int lengthOfLastWord(string s) {
        
            if(s.size() <= 0){return 0;}
            std::stringstream ss(s);
            std::string a;
            while(ss >> a);
            return a.size();
    }
};
