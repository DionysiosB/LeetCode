class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left(1), right(nums.size() - 1);
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid - 1] > nums[mid]){right = mid - 1;}
            else{left = mid + 1;}
        }
        return left - 1;
    }
}
