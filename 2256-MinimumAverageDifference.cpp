class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {

        const int n = nums.size();
        std::vector<int> vr(n, 0);

        long long total(0);
        for(int p = n - 2; p >= 0; p--){
            total += nums[p + 1];
            vr[p] = total / (n - 1 - p);
        }

        int mnd(1e9), idx(-1); total = 0;
        for(int p = 0; p < n; p++){
            total += nums[p];
            int avg = total / (p + 1);
            int diff = avg - vr[p];
            diff = (diff > 0 ? diff : -diff);
            if(diff < mnd){mnd = diff; idx = p;}
        }

        return idx;
    }
};
