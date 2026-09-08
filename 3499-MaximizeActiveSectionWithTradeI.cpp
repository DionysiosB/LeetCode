class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {

        s += '1';
        int ones(-1), prev(-1), zeros(0), mz(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '1'){
                ++ones;
                if(p && s[p - 1] == '0'){
                    if(prev > 0){mz = std::max(mz, prev + zeros);}
                    prev = zeros;
                    zeros = 0;
                }
            }
            else{++zeros;}
        }

        return ones + mz;
    }
};
