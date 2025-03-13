class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        std::vector<int> v(nums);
        while(v.size() > 1){
            for(int p = 0; p + 1 < v.size(); p++){v[p] = (v[p] + v[p + 1]) % 10;}
            v.pop_back();
        }
        
        return v[0];
    }
};
