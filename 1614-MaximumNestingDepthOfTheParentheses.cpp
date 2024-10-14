class Solution {
public:
    int maxDepth(string s) {
        int depth(0), mxd(0);
        for(int p = 0; p < s.size(); p++){
            depth += (s[p] == '(') - (s[p] == ')');
            mxd = (mxd > depth ? mxd : depth);
        }
        return mxd;
    }
};
