class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {

        std::map<int, int> m;
        int mxc(0);
        for(int p = 0; p < nums.size(); p++){
            ++m[nums[p]];
            mxc = (mxc > m[nums[p]] ? mxc : m[nums[p]]);
        }

        if(2 * mxc >= nums.size()){return 2 * mxc - nums.size();}
        else if(nums.size() % 2){return 1;}
        return 0;
    }
};
