class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        std::vector<std::pair<int, int> > w(nums.size());
        for(int p = 0; p < nums.size(); p++){w[p] = std::make_pair(nums[p], p);}
        sort(w.begin(), w.end());

        std::vector<int> v(nums.size());
        int prev(0);
        for(int p = 0; p < v.size(); p++){
            const int pos = w[p].second;
            if(p > 0 && w[p - 1].first == w[p].first){v[pos] = prev;}
            else{v[pos] = p; prev = p;}
        }

        return v;
    }
};
