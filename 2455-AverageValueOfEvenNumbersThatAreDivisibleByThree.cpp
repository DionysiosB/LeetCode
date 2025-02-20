class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s(0), cnt(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] % 6){continue;}
            s += nums[p]; ++cnt;
        }
        
        return (cnt ? (s / cnt) : 0);
        
    }
};
