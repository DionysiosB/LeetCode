class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {

        long mx(-1);
        for(long p = 0; p < nums.size(); p++){mx = (nums[p] > mx ? nums[p] : mx);}

        std::vector<int> v;
        long long total(0), step(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] >= mx){
                v.push_back(p + 1);
                if(v.size() >= k){step = v[v.size() - k];}
            }

            total += step;
        }

        return total;
    }
};
