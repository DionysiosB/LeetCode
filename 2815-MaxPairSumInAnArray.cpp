class Solution {
public:
    int maxSum(vector<int>& nums) {
        std::map<int, int> m;
        int res(-1);
        for(int p = 0; p < nums.size(); p++){
            int x = nums[p];
            int md(0);while(x){md = (md > (x % 10) ? md : (x % 10)); x /= 10;}
            if(m.count(md)){
                int s = m[md] + nums[p];
                res = (res > s ? res : s);
                m[md] = (m[md] > nums[p] ? m[md] : nums[p]);
            }
            else{m[md] = nums[p];}
        }
        return res;
    }
};
