class Solution {
public:
    int maximumLengthSubstring(string s) {

        int mxl(0);
        for(int start = 0; start < s.size(); start++){
            for(int stop = start; stop < s.size(); stop++){
                int len = stop - start + 1;
                std::map<char, int> m;
                bool valid(true);
                for(int p = start; valid && p <= stop; p++){
                    ++m[s[p]];
                    if(m[s[p]] > 2){valid = false;}
                }
                if(valid){mxl = (mxl > len ? mxl : len);}
            }
        }

        return mxl;
    }
};
