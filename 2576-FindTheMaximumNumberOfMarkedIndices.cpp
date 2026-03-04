class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int idx(0), cnt(0);
        for(int p = (nums.size() + 1) / 2; p < nums.size(); p++){
            if(2 * nums[idx] <= nums[p]){cnt += 2; ++idx;}
        }

        return cnt;
    }
};
