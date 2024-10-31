class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        std::map<int, int> cnt;
        int total(0);
        for(int p = 0; p < nums.size(); p++){
            ++cnt[nums[p]];
            if(cnt[nums[p]] == 1){total += nums[p];}
            else if(cnt[nums[p]] == 2){total -= nums[p];}
        }

        return total;
    }
};
