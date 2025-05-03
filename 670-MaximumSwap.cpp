class Solution {
public:
    int maximumSwap(int num) {

        std::string s = std::to_string(num);
        
        bool done(false);
        for(int p = 0; !done && p < s.size(); p++){
            char x(s[p] + 1); int idx(p);
            for(int q = p + 1; q < s.size(); q++){
                if(s[q] >= x){idx = q; x = s[q]; done = true;}
            }

            if(done){s[idx] = s[p]; s[p] = x; break;}
        }

        return std::stoi(s);
    }
};
