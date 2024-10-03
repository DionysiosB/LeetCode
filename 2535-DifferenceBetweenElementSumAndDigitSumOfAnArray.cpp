class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int snd(0);
        for(long p = 0; p < nums.size(); p++){
            snd += nums[p];
            while(nums[p]){snd -= nums[p] % 10; nums[p] /= 10;}
        }

        return snd;
    }
};
