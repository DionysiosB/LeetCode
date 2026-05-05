class Solution {
public:
    int minLength(string s) {

        std::string w("");
        for(char x : s){
            if(w.empty()){w += x;}
            else if(w.back() == 'A' && x == 'B'){w.pop_back();}
            else if(w.back() == 'C' && x == 'D'){w.pop_back();}
            else{w += x;}
        }

        return w.size();        
    }
};
