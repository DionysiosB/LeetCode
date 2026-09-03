class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {

        const int B = 31;
        std::vector<std::vector<int> > w(nums.size() + 1, std::vector<int>(B, -1));

        for(int p = nums.size() - 1; p >= 0; p--){
            int x = nums[p];
            for(int b = 0; b < B; b++){
                w[p][b] = w[p + 1][b];
                if(x % 2){w[p][b] = p;}
                x /= 2;
            }
        }

        std::vector<int> v(nums.size());
        for(int p = 0; p < nums.size(); p++){
            int last(p);
            for(int b = 0; b < B; b++){last = std::max(last, w[p][b]);}
            v[p] = last - p + 1;
        }

        return v;
    }
};
