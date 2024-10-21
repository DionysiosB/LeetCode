bool check(const std::vector<int> & nums, int ts, int k){
    int cur(0), cnt(1);
    for(int p = 0; p < nums.size(); p++){
        cur += nums[p];
        if(nums[p] > ts){return false;}
        if(cur > ts){++cnt; cur = nums[p];}
    }

    return (cnt <= k);
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int sum(0);
        for(int p = 0; p < nums.size(); p++){sum += nums[p];}
        int avg = (sum + k - 1) / k;

        int left((sum + k - 1) / k), right(sum), ans(sum);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(nums, mid, k)){ans = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        return ans;
    }
};
