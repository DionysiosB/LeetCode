class Solution {
public:
    vector<string> cellsInRange(string s) {
        std::vector<std::string> v;
        for(char row = s[0]; row <= s[3]; row++){
            for(char col = s[1]; col <= s[4]; col++){
                std::string s; s += row; s += col;
                v.push_back(s);
            }
        }
        
        return v;
    }
};
