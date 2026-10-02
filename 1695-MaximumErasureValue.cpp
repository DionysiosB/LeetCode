class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int mxs(0), cs(0), idx(0);
        std::set<int> vs;
        for(int x : nums){
            while(vs.count(x)){
                vs.erase(nums[idx]);
                cs -= nums[idx];
                ++idx;
            }

            vs.insert(x);
            cs += x; 
            mxs = std::max(mxs, cs);            
        }

        return mxs;
    }
};
