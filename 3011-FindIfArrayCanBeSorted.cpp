class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        
        const int n = nums.size();
        std::vector<int> v(n);
        for(int p = 0; p < n; p++){
            int x(nums[p]), cnt(0);
            while(x){cnt += (x & 1); x /= 2;}
            v[p] = cnt;
        }

        int start(0);
        for(int p = 1; p < n; p++){
            if(v[p - 1] != v[p]){
                if(p > start + 1){sort(nums.begin() + start, nums.begin() + p);}
                start = p;
            }
        }

        sort(nums.begin() + start, nums.end());

        for(long p = 1; p < n; p++){if(nums[p - 1] > nums[p]){return false;}}
        return true;
    }
};
