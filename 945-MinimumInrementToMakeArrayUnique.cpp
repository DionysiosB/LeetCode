class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int cnt(0), prev(-1);
        for(int n : nums){
            if(n <= prev){cnt += prev + 1 - n; n = prev + 1;}
            prev = n;
        }

        return cnt;
    }
};
