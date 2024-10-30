class Solution {
public:
    int jump(vector<int>& nums) {
        std::vector<int> v(nums.size(), 1e7);
        v[0] = 0;
        for(int p = 0; p < v.size(); p++){
            for(int u = 1; u <= nums[p]; u++){
                if(p + u >= v.size()){break;}
                int tst = v[p] + 1;
                v[p + u] = (v[p + u] < tst ? v[p + u] : tst);
            }
        }

        return v.back();
    }
};
