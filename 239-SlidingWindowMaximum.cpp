class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        std::multiset<int> ms;
        std::vector<int> ans(nums.size() - k + 1, 0);
        for(int p = 0; p < nums.size(); p++){
            ms.insert(nums[p]);
            if(p >= k){ms.erase(ms.find(nums[p - k]));}
            if(p >= k - 1){ans[p - k + 1] = *ms.rbegin();}
        }

        return ans;
    }
}
