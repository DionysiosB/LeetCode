class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> vl(nums), vr(nums);
        for(int p = 1; p < n; p++){vl[p] = (vl[p - 1] < vl[p] ? vl[p - 1] : vl[p]);}
        for(int p = n - 2; p >= 0; p--){vr[p] = (vr[p + 1] < vr[p] ? vr[p + 1] : vr[p]);}
        int res(-1);
        for(int p = 1; p + 1 < n; p++){
            if(vl[p - 1] < nums[p] && nums[p] > vr[p + 1]){
                int tst = vl[p - 1] + nums[p] + vr[p + 1];
                res = (res < 0 ? tst : res);
                res = (tst < res ? tst : res);
            }
        }
        
        return res;
    }
};
