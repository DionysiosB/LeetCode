class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        std::multiset<std::pair<int, int> > ms;
        for(int p = 0; p < nums.size(); p++){
            ms.insert(std::make_pair(nums[p], p));
        }

        for(int p = 0; p < k; p++){
            std::pair<int, int> cp = *ms.begin();
            ms.erase(ms.begin());
            ms.insert(std::make_pair(multiplier * cp.first, cp.second));
        }


        for(std::multiset<std::pair<int, int> >::iterator it = ms.begin(); it != ms.end(); it++){
            nums[it->second] = it->first;
        }

        return nums;
    }
};
