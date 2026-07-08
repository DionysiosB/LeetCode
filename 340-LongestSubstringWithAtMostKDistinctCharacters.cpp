class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        if(k <= 0){return 0;}

        int mxlen(1);
        int left(0);
        std::map<char, int> m;
        m[s[0]] = 1;

        for(long p = 1; p < s.size(); p++){
            ++m[s[p]];
            while(m.size() > k){
                --m[s[left]];
                if(m[s[left]] <= 0){m.erase(s[left]);}
                ++left;
            }

            int len = p - left + 1;
            mxlen = std::max(len, mxlen);
        }

        return mxlen;
    }
};
