class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int cnt(0);
        for(int p = 2; p < nums.size(); p++){
            int right(p - 1);
            for(int left = 0; left < right; left++){
                while(left < right && nums[left] + nums[right] + nums[p] >= target){--right;}
                cnt += (right - left);
            }
        }

        return cnt;
    }
};
