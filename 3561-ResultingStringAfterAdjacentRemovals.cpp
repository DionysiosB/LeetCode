class Solution {
public:
    string resultingString(string s) {

        std::stack<char> v;
        for(char x : s){
            if(!v.empty() && (v.top() == x - 1 || v.top() == x + 1 || (v.top() == 'a' && x == 'z') || (v.top() == 'z' && x == 'a') ) ){v.pop();}
            else{v.push(x);}
        }

        std::string ans("");
        while(!v.empty()){ans += v.top(); v.pop();}
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};
