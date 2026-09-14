class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {

        std::vector<std::string> tv;
        for(int h = 0; h < 12; h++){
            for(int m = 0; m < 60; m++){
                std::string cur("");
                if(__builtin_popcount(h) + __builtin_popcount(m) != turnedOn){continue;}
                cur += std::to_string(h) + ":" + (m < 10 ? "0" : "") + std::to_string(m);
                tv.push_back(cur);
            }
        }

        return tv;
    }
};
