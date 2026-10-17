class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int mxlen(0), idx(0);
        for(int p = 0; p < nums.size() && idx < nums.size(); p++){
            while(idx < nums.size() && 1LL * nums[p] * k >= nums[idx]){++idx;}
            const int length = idx - p;
            mxlen = (mxlen > length ? mxlen : length);
        }

        return (nums.size() - mxlen);
    }
};
