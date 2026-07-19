class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        int res(0), mndiff(1e9 + 7);

        for(int p = 0; p + 2 < nums.size(); p++){
            int left(p + 1), right(nums.size() - 1);
            while(left < right){
                int cs = nums[p] + nums[left] + nums[right];
                int diff = std::abs(cs - target);
                if(diff < mndiff){res = cs; mndiff = diff;}

                if(cs > target){--right;}
                else{++left;}
            }
        }

        return res;
    }
};
