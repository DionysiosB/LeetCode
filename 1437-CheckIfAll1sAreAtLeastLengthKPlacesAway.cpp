class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev(-k - 10);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p]){
                if(prev + k >= p){return false;}
                prev = p;
            }
        }
        
        return true;
    }
};
