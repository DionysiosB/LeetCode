class Solution {
public:
    bool equalFrequency(string word) {

        std::vector<int> f(26, 0);
        for(char c : word){++f[c - 'a'];}
        int mnf(word.size()), mxf(0), cmn(0), cmx(0), cnt(0);
        for(int p = 0; p < 26; p++){
            if(!f[p]){continue;}
            ++cnt;
            if(f[p] < mnf){mnf = f[p]; cmn = 1;}
            else if(f[p] == mnf){++cmn;}

            if(f[p] > mxf){mxf = f[p]; cmx = 1;}
            else if(f[p] == mxf){++cmx;}
        }

        if(cnt == 1){return true;}
        if(mxf == 1){return true;}
        if(mnf == 1 && cmx + 1 == cnt){return true;}
        if(mxf - mnf != 1){return false;}
        if(cmx != 1){return false;}
        return true;
    }
};
