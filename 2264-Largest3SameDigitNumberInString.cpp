class Solution {
public:
    string largestGoodInteger(string num) {
        std::string res("");
        for(int p = 2; p < num.size(); p++){
            if(num[p - 2] == num[p] && num[p - 1] == num[p]){
                if(res == "" || res[0] < num[p]){res = std::string(3, num[p]);}
            }
        }

        return res;
    }
};
