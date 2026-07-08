class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        size_t left(0), right(nums.size() - 1);
        long long lv(nums[0]), rv(nums.back());
        int cnt(0);
        while(left < right){
            if(lv < rv){lv += nums[++left]; ++cnt;}
            else if(lv > rv){rv += nums[--right]; ++cnt;}
            else{lv = nums[++left]; rv = nums[--right];}
        }

        return cnt;
    }
};
