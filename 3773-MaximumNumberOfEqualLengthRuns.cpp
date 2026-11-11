class Solution {
public:
    int maxSameLengthRuns(string s) {

        int cnt(1);
        std::map<int, int> m;
        for(int p = 1; p < s.size(); p++){
            if(s[p - 1] != s[p]){++m[cnt]; cnt = 1;}
            else{++cnt;}
        }

        ++m[cnt];

        int mxcnt(0);
        for(std::pair<int, int> x : m){
            int val = x.second;
            mxcnt = (mxcnt > val ? mxcnt : val);
        }

        return mxcnt;
    }
};
