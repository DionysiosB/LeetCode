class Solution {
public:

    int subarrayGCD(vector<int>& nums, int k) {
        
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){
            int g(0);
            for(int q = p; q < nums.size(); q++){
                g = gcd(g, nums[q]);
                cnt += (g == k);
            }
        }

        return cnt;
    }
};
