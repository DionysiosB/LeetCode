class Solution {
public:
    long long splitArray(vector<int>& nums) {
        
        const int n = nums.size();

        long long leftsum(nums[0]), leftidx(0);
        for(long p = 1; p < n; p++){
            if(nums[p - 1] < nums[p]){leftsum += nums[p]; leftidx = p;}
            else{break;}
        }

        long long rightsum(nums.back()), rightidx(n - 1);
        for(long p = n - 2; p >= 0; p--){
            if(nums[p] > nums[p + 1]){rightsum += nums[p]; rightidx = p;}
            else{break;}
        }

        if(leftidx + 1 < rightidx){return -1LL;}
        else if(leftidx + 1 == rightidx){return std::abs(leftsum - rightsum);}
        else if(leftidx == rightidx){
            if(leftsum > rightsum){leftsum -= nums[leftidx];}
            else{rightsum -= nums[rightidx];}
            return std::abs(leftsum - rightsum);
        }

        return -1LL;
    }
};
