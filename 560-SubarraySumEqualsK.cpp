class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::map<int, int> m; m[0] = 1;
        int cnt(0), s(0);
        for(int p = 0; p < nums.size(); p++){
            s += nums[p];
            if(m.count(s - k)){cnt += m[s - k];}
            ++m[s];
        }

        return cnt;
    }
};
