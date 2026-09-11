class Solution {
public:
    int makeArrayPositive(vector<int>& nums) {

        int idx(2), cnt(0);
        long long cs(nums[0] + nums[1]);
        while(idx < nums.size()){
            long long triplet = (long long)nums[idx - 2] + nums[idx - 1] + nums[idx];
            cs = std::min(cs + nums[idx], triplet);
            if(cs <= 0 || triplet <= 0){
                idx += 3;
                ++cnt;
                if(idx >= nums.size()){break;}
                cs = nums[idx - 2] + nums[idx - 1];
            }
            else{++idx;}
        }

        return cnt;
    }
};
