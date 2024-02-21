class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x(0), cnt(0);
        for(int p = 0; p < nums.size(); p++){
            if(cnt <= 0){x = nums[p]; cnt = 1;}
            else if(nums[p] == x){++cnt;}
            else if(nums[p] != x){--cnt;}
        }

        return x;
    }
}
