class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {

        const int n = nums.size();
        int v(0);
        for(int p = 0; p < n; p++){v |= nums[p];}

        int N(1 << n), cnt(0);
        for(int p = 1; p < N; p++){
            int tst(0), cur(p);
            for(int d = 0; d < n; d++){
                tst |= nums[d] * (cur % 2);
                cur /= 2;
            }
            cnt += (tst == v);
        }

        return cnt;
    }

};
