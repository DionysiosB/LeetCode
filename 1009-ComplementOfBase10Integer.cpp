class Solution {
public:
    int bitwiseComplement(int n) {
        if(!n){return 1;}
        std::vector<bool> v;
        while(n){v.push_back(!(n & 1)); n /= 2;}
        int res(0);
        for(int p = v.size() - 1; p >= 0; p--){res = 2 * res + v[p];}
        return res;
    }
};
