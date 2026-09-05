class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {

        const int N = nums.size();
        int cnt(0);
        for(int n = 0; n <= N; n++){

            bool sorted(true);
            int sum(1e7), idx(-1);
            for(int p = 1; p < nums.size(); p++){
                if(nums[p - 1] > nums[p]){sorted = false;}
                if(nums[p - 1] + nums[p] < sum){
                    sum = nums[p - 1] + nums[p];
                    idx = p - 1;
                }
            }

            if(sorted){break;}
            ++cnt;

            std::vector<int> v;
            for(int p = 0; p <= idx; p++){v.push_back(nums[p]);}
            v.back() += nums[idx + 1];
            for(int p = idx + 2; p < nums.size(); p++){v.push_back(nums[p]);}
            nums = v;
        }

        return cnt;
    }
};
