class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int s(0); for(int p = 0; p < k; p++){s += nums[p];}
        int mx(s);
        for(int p = k; p < nums.size(); p++){
            s += nums[p] - nums[p - k];
            mx = (mx > s ? mx : s);
        }
        
        return 1.0 * mx / k;
    }
};
