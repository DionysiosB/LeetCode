class Solution {
public:
    vector<string> validStrings(int n) {

        std::vector<std::string> v = {"0", "1"};
        for(long p = 2; p <= n; p++){
            std::vector<std::string> w;
            for(long p = 0; p < v.size(); p++){
                std::string cur = v[p];
                if(cur.back() == '1'){w.push_back(cur + '0');}
                w.push_back(cur + '1');
            }

            v = w;
        }

        return v;
    }
};
