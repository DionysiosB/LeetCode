class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        std::vector<int> v(1, -1);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] % 2){v.push_back(p);}
        }

        int cnt(0);
        for(int p = k; p < v.size(); p++){
            int left = v[p - k + 1] - v[p - k];
            int right = (p + 1 == v.size() ? nums.size() : v[p + 1]) - v[p];
            cnt += left * right;
        }
        return cnt;
    }
};
