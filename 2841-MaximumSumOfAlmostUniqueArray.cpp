class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {

        std::map<int, int> cm;
        long long s(0), mxs(0);
        for(int p = 0; p < nums.size(); p++){
            ++cm[nums[p]];
            s += nums[p];
            if(p >= k){
                int rem = nums[p - k];
                if(cm[rem] == 1){cm.erase(rem);}
                else{--cm[rem];}
                s -= rem;
            }

            if(cm.size() >= m){mxs = std::max(mxs, s);}
        }

        return mxs;
    }
};
