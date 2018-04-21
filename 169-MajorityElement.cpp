class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int majority(0);
        int count(0);
        for(int p = 0; p < nums.size(); p++){
            if(count <= 0){
                count = 1;
                majority = nums[p];
            }
            else{
                if(nums[p] == majority){++count;}
                else{--count;}
            }
        }

        return majority;
        
    }
};
