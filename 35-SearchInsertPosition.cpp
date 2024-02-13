class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        if(target < nums[0]){return 0;}
        int ans(0); int left(0), right(nums.size() - 1);
        while(left <= right){
            long mid = (left + right) / 2;
            if(nums[mid] == target){return mid;}
            else if(nums[mid] < target){left = mid + 1; ans = mid + 1;}
            else if(target < nums[mid]){right = mid - 1; ans = mid;}
        }

        return ans;
    }
};
