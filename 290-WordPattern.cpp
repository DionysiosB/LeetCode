class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        std::stringstream ss(str);
        std::vector<std::string> words;
        std::string a;
        while(ss >> a){words.push_back(a);}
        if(pattern.size() != words.size()){return false;}
        
        std::map<char, std::string> m;
        for(int p = 0; p < pattern.size(); p++){
            char c = pattern[p];
            std::string t = words[p];
            if(m.count(c) <= 0){m[c] = t;}
            else if(m[c] != t){return false;}
        }
        
        std::set<std::string> unique;
        for(std::map<char, std::string>::iterator mapIter = m.begin(); mapIter != m.end(); mapIter++){
            std::string val = mapIter->second;
            if(unique.count(val) > 0){return false;}
            unique.insert(val);
        }
        
        return true;
    }
};
