class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        std::vector<std::vector<int> > v;
        if(nums.size() % 3){return v;}

        sort(nums.begin(), nums.end());
        for(int p = 2; p < nums.size(); p += 3){
            std::vector<int> w;
            w.push_back(nums[p - 2]);
            w.push_back(nums[p - 1]);
            w.push_back(nums[p]);
            if(w.back() > w[0] + k){return std::vector<std::vector<int> >();}
            v.push_back(w);
        }

        return v;
    }
};
