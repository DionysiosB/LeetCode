class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int neg(0), z(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] < 0){++neg;}
            else if(nums[p] == 0){++z;}
            else{break;}
        }

        int pos = n - z - neg;
        return (neg > pos ? neg : pos);
    }
};
