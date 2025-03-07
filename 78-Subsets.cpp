class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n = nums.size();
        int w = (1 << n);
        
        std::vector<std::vector<int> > v;
        for(int p = 0; p < w; p++){
            std::vector<int> cur;
            int x(p), idx(0);
            while(x){
                if(x % 2){cur.push_back(nums[idx]);}
                ++idx;
                x /= 2;
            }
            v.push_back(cur);
        }
        
        return v;
    }
};
