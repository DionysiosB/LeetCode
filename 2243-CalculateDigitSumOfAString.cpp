class Solution {
public:
    string digitSum(string s, int k) {

        std::vector<int> tv(s.size());
        for(int p = 0; p < s.size(); p++){tv[p] = s[p] - '0';}

        while(tv.size() > k){
            std::vector<int> w;
            for(int p = 0; p < tv.size(); p += k){
                int cur(0);
                for(int q = p; q < p + k && q < tv.size(); q++){cur += tv[q];}
                if(cur == 0){w.push_back(0);}
                std::vector<int> cv; while(cur){cv.push_back(cur % 10); cur /= 10;}
                std::reverse(cv.begin(), cv.end());
                for(int q = 0; q < cv.size(); q++){w.push_back(cv[q]);}
            }
            tv = w;
        }

        std::string res("");
        for(int p = 0; p < tv.size(); p++){res += (char)(tv[p] + '0');}
        return res;
    }
};
