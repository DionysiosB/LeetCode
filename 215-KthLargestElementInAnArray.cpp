class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::multiset<int> ms;
        for(int p = 0; p < nums.size(); p++){
            ms.insert(nums[p]);
            if(ms.size() > k){ms.erase(ms.begin());}
        }

        return *ms.begin();
    }
};
