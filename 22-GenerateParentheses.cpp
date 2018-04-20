class Solution {
public:

    void generate(std::vector<std::string> &a, std::string u, int open, int closed, int num){
        if(open >= num && closed >= num){a.push_back(u); return;}
        if(open < num){generate(a, u + '(', open + 1, closed, num);}
        if(closed < open){generate(a, u + ')', open, closed + 1, num);}
        return;
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> v;
        generate(v, "", 0, 0, n);
        return v;
    }
};
