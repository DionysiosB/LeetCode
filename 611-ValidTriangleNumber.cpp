class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int cnt(0), idx(0);
        for(size_t a = 0; a < nums.size(); a++){
            int idx = a + 2;
            for(size_t b = a + 1; b + 1 < nums.size(); b++){
                if(idx <= b){idx = b + 1;}
                const int s = nums[a] + nums[b];
                while(idx < nums.size() && s > nums[idx]){++idx;}
                cnt += idx - 1 - b;
            }
        }

        return cnt;
    }
};
