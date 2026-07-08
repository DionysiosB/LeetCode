class Solution {
public:
    long long countPairs(vector<int>& nums1, vector<int>& nums2) {

        if(nums1.size() < 2){return 0;};
        std::vector<int> v(nums1.size());
        for(size_t p = 0; p < nums1.size(); p++){v[p] = nums1[p] - nums2[p];}
        sort(v.rbegin(), v.rend());
        if(v[0] <= 0){return 0;}
        long long cnt(0);
        size_t idx(0);
        for(size_t p = v.size() - 1; p >= 0; p--){
            if(v[p] > 0){cnt += p * (p + 1) / 2; break;}
            while(idx < p && v[idx] + v[p] > 0){++idx;}
            cnt += idx;
        }
        return cnt;
    }
};
