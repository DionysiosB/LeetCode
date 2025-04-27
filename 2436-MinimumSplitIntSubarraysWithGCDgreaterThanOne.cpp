class Solution {
public:
    
    int gcd(int a, int b){return b ? gcd(b, a % b) : a;}
    
    int minimumSplits(vector<int>& nums) {
        int n = nums.size();
        int cnt(1), g(0);
        for(int p = 0; p < n; p++){
            g = gcd(nums[p], g);
            if(g == 1){++cnt; g = nums[p];}
        }
        
        return cnt;
    }
};
