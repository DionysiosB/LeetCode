class Solution {
public:
    int maxFreqSum(string s) {

        const int B = 26;
        std::vector<int> v(B, 0);
        for(char x : s){++v[x - 'a'];}
        int fv(0), fc(0);
        for(int p = 0; p < B; p++){
            if(p == 0 || p == 4 || p == 8 || p == 14 || p == 20){fv = std::max(fv, v[p]);}
            else{fc = std::max(fc, v[p]);}
        }

        return fv + fc;
    }
};
