class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::set<char> v;
        int idx(0), mxlen(0);
        for(int p = 0; p < s.size(); p++){
            while(idx < p && v.count(s[p])){v.erase(s[idx++]);}
            v.insert(s[p]);
            int len = p - idx + 1;
            mxlen = (mxlen > len ? mxlen : len);
        }

        return mxlen;
    }
};
