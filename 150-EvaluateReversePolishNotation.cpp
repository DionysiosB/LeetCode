class Solution {
public:
int convertToInt(std::string s){
    int res(0);
    int sign = 1;
    for(size_t p = 0; p < s.size(); p++){
        if(p == 0 && s[0] == '-'){sign = -1;}
        else{res = 10 * res + (s[p] - '0');}
    }
    return sign * res;
}

int evalRPN(vector<string>& tokens) {

    std::vector<int> numbers;
    for(size_t p = 0; p < tokens.size(); p++){
        std::string current = tokens[p];
        if((current.size() == 1) && (current == "+" || current == "-" || current == "*" || current == "/")){
            int a = numbers.back(); numbers.pop_back();
            int b = numbers.back(); numbers.pop_back();
            int res;
            if(current == "+"){res = b + a;}
            else if(current == "-"){res = b - a;}
            else if(current == "*"){res = b * a;}
            else if(current == "/"){res = b / a;}
            numbers.push_back(res);
        }
        else{numbers.push_back(convertToInt(current));}
    }

    return numbers.back();
}
};
