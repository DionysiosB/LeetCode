class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {

        std::vector<std::pair<int, int> > v(nums.size());
        for(int p = 0; p < nums.size(); p++){v[p] = std::make_pair(nums[p], p);}
        sort(v.begin(), v.end());
        int ppos(v[0].second), mxl(0);
        for(int p = 1; p < v.size(); p++){
            int len = v[p].second - ppos;
            mxl = (mxl > len ? mxl : len);
            ppos = (ppos < v[p].second ? ppos : v[p].second);
        }
        
        return mxl;
    }
};
