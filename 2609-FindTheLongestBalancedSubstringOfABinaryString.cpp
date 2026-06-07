class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {

        int z(0), a(0), prz(0), mxb(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '0'){a = 0; ++z;}
            else{
                prz = (z > 0 ? z : prz);
                z = 0; ++a;
                mxb = std::max(mxb, std::min(prz, a));
            }
        }
        
        return 2 * mxb;
    }
};
