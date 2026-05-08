class Solution {
public:
    string clearDigits(string s) {

        std::string w;
        for(char x : s){
            if('0' <= x && x <= '9' && !w.empty()){w.pop_back();}
            else{w.push_back(x);}
        }

        return w;
        
    }
};
