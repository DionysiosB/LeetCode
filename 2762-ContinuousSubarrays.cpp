class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {

        const int n = nums.size();
        std::map<int, int> f;
        int idx(0);
        long long cnt(0);

        for(long p = 0; p < n; p++){
            ++f[nums[p]];
            while(f.begin()->first < nums[p] - 2 || f.rbegin()->first > nums[p] + 2){
                int x = nums[idx];
                --f[x]; ++idx;
                if(f[x] <= 0){f.erase(x);}
            }

            cnt += (p - idx + 1);
        }

        return cnt;
    }
};
