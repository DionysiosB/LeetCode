class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {

        std::vector<int> v(nums.size() + 1, 0);
        int res(-1);
        for(int p = 1; p <= nums.size(); p++){v[p] = v[p - 1] + nums[p - 1];}
        for(int start = 1; start < v.size(); start++){
            for(int stop = 1; stop < v.size(); stop++){
                if(stop - start + 1 < l){continue;}
                if(stop - start + 1 > r){continue;}
                int cur = v[stop] - v[start - 1];
                if(cur <= 0){continue;}
                if(res < 0){res = cur;}
                res = (res < cur ? res : cur);
            }
        }

        return res;
    }
};
