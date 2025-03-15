class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        std::vector<int> v; int cnt(0);
        
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] < pivot){v.push_back(nums[p]);}
            cnt += (nums[p] == pivot);
        }
        
        for(int p = 0; p < cnt; p++){v.push_back(pivot);}
        for(int p = 0; p < nums.size(); p++){if(nums[p] > pivot){v.push_back(nums[p]);}}
        return v;
    }
};
