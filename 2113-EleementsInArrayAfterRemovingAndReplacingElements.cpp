class Solution {
public:
    vector<int> elementInNums(vector<int>& nums, vector<vector<int>>& q) {
        int n = nums.size();
        std::vector<int> ans(q.size(), -1);
        for(int p = 0; p < q.size(); p++){
            int t = q[p][0] % (2 * n);
            int x = q[p][1];
            if(x < std::abs(t - n)){ans[p] = nums[x + (t <= n) * t];}
        }

        return ans;
    }
};
