class Solution {
public:
    int minSwaps(vector<int>& nums) {
        const int n = nums.size();
        int a(0); for(int p = 0; p < n; p++){a += nums[p];}
        std::vector<int> cz(n,0);
        for(int p = 0; p < n; p++){cz[p] = (p ? cz[p - 1] : 0) + (1 - nums[p]);}

        int res(n + 1);
        for(int p = 0; p < n; p++){
            int diff = (p >= a ? (cz[p] - cz[p - a]) : (cz.back() - cz[n + p - a] + cz[p]) );
            res = (res < diff ? res : diff);
        }

        return res;
    }
};
