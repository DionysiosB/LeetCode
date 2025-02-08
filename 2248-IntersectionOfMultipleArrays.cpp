class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        std::vector<int> v(1007, 0);
        for(int row = 0; row < nums.size(); row++){
            for(int p = 0; p < nums[row].size(); p++){++v[nums[row][p]];}
        }
        
        std::vector<int> res;
        for(int p = 0; p < v.size(); p++){
            if(v[p] == nums.size()){res.push_back(p);}
        }
        return res;
    }
};
