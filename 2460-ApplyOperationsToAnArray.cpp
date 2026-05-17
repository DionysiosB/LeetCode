class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

        std::vector<int> v; int z(0);
        for(int p = 0; p + 1 < nums.size(); p++){
            if(!nums[p]){++z;}
            else if(nums[p] == nums[p + 1]){
                v.push_back(2 * nums[p]);
                nums[p + 1] = 0;
            }
            else{v.push_back(nums[p]);}
        }
        v.push_back(nums.back());
        while(z--){v.push_back(0);}
        return v;   
    }
};
