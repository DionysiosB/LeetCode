class Solution {
public:
    int maxOperations(vector<int>& nums) {
        
        int fs(nums[0] + nums[1]);
        int cnt(1);
        for(int p = 2; p < nums.size(); p += 2){
            if(nums[p] + nums[p + 1] == fs){++cnt;}
            else{break;}
        }
        
        return cnt;
    }
};
