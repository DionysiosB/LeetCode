class Solution {
public:
    bool isValid(std::string s) {

        std::stack<char> t;
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '(' || s[p] == '[' || s[p] == '{'){t.push(s[p]);}
            else if(s[p] == ')'){if(t.size() > 0 && t.top() == '('){t.pop();} else{return false;}}
            else if(s[p] == ']'){if(t.size() > 0 && t.top() == '['){t.pop();} else{return false;}}
            else if(s[p] == '}'){if(t.size() > 0 && t.top() == '{'){t.pop();} else{return false;}}
        }

        return (t.size() == 0);
    }
};
