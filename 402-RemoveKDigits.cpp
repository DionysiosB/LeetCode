class Solution {
public:
    string removeKdigits(string num, int k) {

        std::stack<char> s;
        for(int p = 0; p < num.size(); p++){
            while(!s.empty() && s.top() > num[p] && k > 0){s.pop(); --k;}
            s.push(num[p]);
        }

        while(!s.empty() && k > 0){s.pop(); --k;}

        std::string res("");
        while(!s.empty()){res += s.top(); s.pop();}
        std::reverse(res.begin(), res.end());
        while(res[0] == '0'){res = res.substr(1);}
        if(res.empty()){res = "0";}
        
        return res;
    }
};
