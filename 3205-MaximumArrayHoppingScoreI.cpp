class Solution {
public:
    int maxScore(vector<int>& nums) {

        std::vector<int> mxv, mxw;
        mxv.push_back(nums.back());
        mxw.push_back(nums.size() - 1);
        for(int p = nums.size() - 2; p >= 0; p--){
            if(nums[p] > mxv.back()){mxv.push_back(nums[p]); mxw.push_back(p);}
        }

        
        int total(0);
        for(int p = mxw.size() - 1; p >= 0; p--){
            total += mxv[p] * (mxw[p] - (p + 1 < mxw.size() ? mxw[p + 1] : 0) );
        }
        return total;
    }
};
