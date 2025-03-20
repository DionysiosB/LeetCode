class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        std::vector<bool> v(nums.size());
        int mxcnt(0);
        for(int p = 0; p < nums.size(); p++){
            if(v[nums[p]]){continue;}         
            int cnt(0), x(nums[p]);
            do{
                v[x] = 1;
                ++cnt;
                mxcnt = (mxcnt > cnt ? mxcnt : cnt);
                x = nums[x];
            }while(x != nums[p]);
        }
        
        return mxcnt;
    }
};
