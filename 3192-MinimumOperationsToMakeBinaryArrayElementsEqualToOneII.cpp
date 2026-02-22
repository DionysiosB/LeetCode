class Solution {
public:
    int minOperations(vector<int>& nums) {

        long cnt(0);
        bool prev(0);
        for(long p = 0; p < nums.size(); p++){
            if( (nums[p] + prev) % 2){continue;}
            ++cnt;
            prev = !prev;
        }

        return cnt;
    }
};
