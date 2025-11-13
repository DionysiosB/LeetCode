class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        std::map<long, long> m;
        long mxc(0), res(-1);
        for(long p = 0; p + 1 < nums.size(); p++){
            if(nums[p] != key){continue;}
            ++m[nums[p + 1]];
            if(m[nums[p + 1]] > mxc){mxc = m[nums[p + 1]]; res = nums[p + 1];}
        }

        return res;
    }
};
