class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int cur(0);
        std::vector<int> v(nums.size(), 0);
        for(int p = 0; p < nums.size(); p++){
            cur -= v[p];
            if(nums[p] > cur){
                int diff = nums[p] - cur;
                cur = nums[p]; 
                if(p + k < nums.size()){v[p + k] = diff;}
                else if(p + k > nums.size()){return false;}
            }
            else if(nums[p] < cur){return false;}
        }

        return true;
    }
};
