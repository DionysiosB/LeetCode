class Solution {
public:
    long long maximumAlternatingSubarraySum(vector<int>& nums) {
        
        long long lastminus(-1e7), lastplus(-1e7), sofar(-1e7), res(-1e7);
        for(long long num : nums){
            long long sofar = std::max(lastminus + num, num);
            lastminus = lastplus - num;
            lastplus = sofar;

            res = std::max(res, std::max(lastminus, lastplus));
        }

        return res;
    }
};
