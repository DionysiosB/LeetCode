class Solution {
public:
    string largestPalindromic(string num) {
        std::vector<int> v(10, 0);
        for(int p = 0; p < num.size(); p++){++v[num[p] - '0'];}

        std::string s("");
        for(int p = 9; p > 0; p--){
            int cur = (v[p] / 2);
            s += std::string(cur, '0' + p);
        }

        if(s.size() > 0){s += std::string(v[0] / 2, '0');}

        std::string middle("");
        for(int p = 9; middle.empty() && p >= 0; p--){
            if(v[p]% 2){middle += (char)('0' + p);}
        }

        if(s.empty() && middle.empty() && v[0]){return "0";}

        std::string left(s); std::reverse(s.begin(), s.end());
        return left + middle + s;
    }
};
