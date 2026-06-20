class Solution {
public:
    int minimumDeletions(string s) {

        std::vector<int> va(s.size(), 0), vb(s.size(), 0);
        for(int p = s.size() - 1; p >= 0; p--){
            va[p] = (p + 1 < s.size() ? va[p + 1] : 0) + (s[p] == 'a');
        }

        for(int p = 0; p < s.size(); p++){
            vb[p] = (p ? vb[p - 1] : 0) + (s[p] == 'b');
        }

        int mnd(s.size());
        for(int p = 0; p < s.size(); p++){
            int left = (p > 0 ? vb[p - 1] : 0);
            int right = (p + 1 < s.size() ? va[p + 1] : 0);
            int cur = left + right;
            mnd = (mnd < cur ? mnd : cur);
        }

        return mnd;
    }
};
