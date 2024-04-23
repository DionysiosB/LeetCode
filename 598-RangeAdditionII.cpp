class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int mrow(m), mcol(n);
        for(int p = 0; p < ops.size(); p++){
            mrow = (mrow < ops[p][0] ? mrow : ops[p][0]);
            mcol = (mcol < ops[p][1] ? mcol : ops[p][1]);
        }

        return mrow * mcol;
    }
};
