class Solution {
public:
    bool checkZeroOnes(string s) {
        long a(0), z(0), mxa(0), mxz(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){++z; a = 0; mxz = (mxz > z ? mxz : z);}
            else{++a; z = 0; mxa = (mxa > a ? mxa : a);}
        }

        return (mxa > mxz);
    }
};
