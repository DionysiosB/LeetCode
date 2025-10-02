class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        const int n = nums.size();
        int idx(n);
        for(int p = 1; p < n; p++){
            if(nums[p - 1] > nums[p]){
                if(idx < n){return -1;}
                idx = p;
                if(nums[0] < nums.back()){return -1;}
            }
        }

        return n - idx;
    }
};
