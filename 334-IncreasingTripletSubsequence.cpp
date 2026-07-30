class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        const int n = nums.size();
        std::vector<int> vl(n), vr(n);
        int cm(nums[0]), cx(nums.back());
        for(int p = 1; p < n; p++){
            vl[p] = cm;
            cm = std::min(cm, nums[p]);
        }

        for(int p = n - 2; p >= 0; p--){
            vr[p] = cx;
            cx = std::max(cx, nums[p]);
        }

        for(int p = 1; p + 1 < n; p++){
            if(vl[p] < nums[p] && nums[p] < vr[p]){return true;}
        }
        return false;
    }
};
