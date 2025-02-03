class Solution {
public:
    string removeDuplicates(string s) {
        std::stack<char> t;
        for(int p = 0; p < s.size(); p++){
            if(!t.empty() && s[p] == t.top()){t.pop();}
            else{t.push(s[p]);}
        }
        
        std::string res("");
        while(!t.empty()){res += t.top(); t.pop();}
        std::reverse(res.begin(), res.end());
        return res;
    }
    
};
