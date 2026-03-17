class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        nums.push_back(nums.back() + k + 7);

        long long total(0), rem(k);
        for(int p = 0; p < nums.size() && rem > 0; p++){
            long long first = 1 + (p > 0 ? nums[p - 1] : 0);
            long long last = -1 + ( (first + rem) < nums[p] ? (first + rem) : nums[p]);
            if(first > last){continue;}
            long long cnt  = last - first + 1;
            rem -= cnt;
            total += cnt * (first + last) / 2;
        }

        return total;
    }
};
