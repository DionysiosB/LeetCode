class Solution {
public:

    bool check(std::vector<int> &nums, int div, int ub){
        int total(0);
        for(long p = 0; p < nums.size(); p++){
            total += (nums[p] + div - 1) / div;
            if(total > ub){return false;}
        }
        return true;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        long left(1), right(1e6 + 7);
        long res(0);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(nums, mid, threshold)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }
        return res;
    }
};
