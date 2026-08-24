class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {

        int mnlen(nums.size() + 7);
        for(int start = 0; start < nums.size(); start++){
            int cs(0);
            for(int p = start; p < nums.size(); p++){
                cs |= nums[p];
                if(cs >= k){
                    if(p - start + 1 < mnlen){mnlen = p - start + 1;}
                    break;
                }
            }
        }

        return mnlen <= nums.size() ? mnlen : -1;
    }
};
