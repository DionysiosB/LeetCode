class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        long long cnt(0), total(0);
        for(int num : nums){
            if(num != 0){cnt = 0; continue;}
            ++cnt;
            total += cnt;
        }

        return total;
    }
};
