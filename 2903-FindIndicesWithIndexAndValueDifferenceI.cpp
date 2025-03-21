class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        
        int mn(100), mx(0);
        int a(-1), b(-1);
        for(int p = indexDifference; p < nums.size(); p++){
            int q = p - indexDifference;
            if(nums[q] < mn){mn = nums[q]; a = q;}
            if(nums[q] > mx){mx = nums[q]; b = q;}
            int diff = std::abs(nums[p] - mn);
            if(diff >= valueDifference){return std::vector<int>({a, p});}

            diff = std::abs(mx - nums[p]);
            if(diff >= valueDifference){return std::vector<int>({b, p});}
        }
        
        return std::vector<int>({-1, -1});
    }
};
