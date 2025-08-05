class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2){
        int n = nums1.size();
        std::vector<int> dpa(n, 1), dpb(n, 1);
        int ans(1);

        for(int p = 1; p < n; p++){
            if(nums1[p - 1] <= nums1[p]){dpa[p] = std::max(dpa[p], 1 + dpa[p - 1]);}
            if(nums2[p - 1] <= nums1[p]){dpa[p] = std::max(dpa[p], 1 + dpb[p - 1]);}

            if(nums1[p - 1] <= nums2[p]){dpb[p] = std::max(dpb[p], 1 + dpa[p - 1]);}
            if(nums2[p - 1] <= nums2[p]){dpb[p] = std::max(dpb[p], 1 + dpb[p - 1]);}

            ans = std::max(ans, std::max(dpa[p], dpb[p]));
        }

        return ans;
    }
};
