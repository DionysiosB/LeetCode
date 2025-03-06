class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){
            bool even(true);
            while(nums[p]){even = !even; nums[p] /= 10;}
            cnt += even;
        }
        
        return cnt;
    }
};
