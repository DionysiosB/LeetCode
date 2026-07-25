class Solution {
public:
    int maxDifference(string s) {
        
        std::vector<int> v(26, 0);
        for(char x : s){++v[x - 'a'];}

        int mxd(0), mnv(s.size());
        for(int p = 0; p < 26; p++){
            if(!v[p]){continue;}
            if(v[p] % 2){mxd = std::max(mxd, v[p]);}
            else{mnv = std::min(mnv, v[p]);}
        }

        return mxd - mnv;
    }
};
