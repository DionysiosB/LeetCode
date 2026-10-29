class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        const int B = 5e4 + 7;
        std::vector<int> v(2 * B, 0);
        for(int x : nums){++v[B + x];}
        int idx(0);
        for(int p = 0; p < v.size(); p++){
            while(v[p]){nums[idx++] = p - B; --v[p];}
        }
        return nums;
    }
};
