class Solution {
public:
    bool canJump(vector<int>& nums) {
        const int n = nums.size();
        long mx(0);
        for(long p = 0; p < n; p++){
            if(mx < p){return false;}
            int tmp = p + nums[p];
            mx = (mx > tmp ? mx : tmp);
            if(mx >= n - 1){return true;}
        }

        return true;
    }
}
