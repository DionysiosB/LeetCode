class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();        
        int mn(1e5 + 7), mx(0), wmn(-1), wmx(-1);
        for(int p = 0; p < n; p++){
            if(nums[p] >= mx){mx = nums[p]; wmx = p;}
            if(nums[p] < mn){mn = nums[p]; wmn = p;}
        }
        
        return (wmn + n - 1 - wmx - (wmn > wmx));
    }
};
