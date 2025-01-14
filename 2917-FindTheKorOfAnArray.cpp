class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        std::vector<int> v(37);
        for(int p = 0; p < nums.size(); p++){
            int x(nums[p]), idx(0);
            while(x){v[idx++] += x % 2; x /= 2;}
        }
        
        int res(0);
        for(int p = v.size() - 1; p >= 0; p--){res = 2 * res + (v[p] >= k);}
        return res;
    }
};
