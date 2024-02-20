class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        std::vector<std::pair<int, int> > v(nums.size());
        for(int p = 0; p < nums.size(); p++){v[p].first = nums[p]; v[p].second = p;}
        sort(v.begin(), v.end());
        for(long p = 1; p < v.size(); p++){
            if(v[p - 1].first != v[p].first){continue;}
            if(v[p - 1].second + k >= v[p].second){return true;}
        }

        return false;
    }
};
