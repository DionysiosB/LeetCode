class Solution {
public:
    int divisibleTripletCount(vector<int>& nums, int d) {

        int cnt(0);
        std::unordered_map<int, int> m;
        for(int p = 0; p < nums.size(); p++){
            cnt += m[(d - (nums[p] % d)) % d];
            for(int q = 0; q < p; q++){++m[(nums[q] + nums[p]) % d];}
        }

        return cnt;
    }
};
