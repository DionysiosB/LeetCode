class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {

        const int n = nums.size();
        std::vector<int> w(n, -1);
        long long total(0);
        for(int p = 0; p < n; p++){
            total += nums[p];
            if(p < 2 * k){continue;}
            else if(p > 2 * k){total -= nums[p - 2 * k - 1];}
            w[p - k] = (int) (total / (2 * k + 1));
        }

        return w;
    }
};
