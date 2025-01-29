class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        std::vector<bool> v(107, 0);
        for(int p = 0; p < nums.size(); p++){
            for(int u = nums[p][0]; u <= nums[p][1]; u++){v[u] = 1;}
        }
        
        int s(0);
        for(int p = 0; p < v.size(); p++){s += v[p];}
        return s;
        
    }
};
