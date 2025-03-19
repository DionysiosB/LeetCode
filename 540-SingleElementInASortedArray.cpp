class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int left(0), right(nums.size() - 1);
        while(left <= right){
            int mid = (left + right) / 2;
            if(mid % 2){
                if(nums[mid - 1] == nums[mid]){left = mid + 1;}
                else{right = mid - 1;}
            }
            else{  //The single element HAS to be on an odd index
                if(mid == 0 || mid == nums.size() - 1){return nums[mid];}
                else if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]){return nums[mid];}
                
                if(nums[mid] == nums[mid + 1]){left = mid;}
                else{right = mid;}
            }
        }
        
        return 0;
    }
};
