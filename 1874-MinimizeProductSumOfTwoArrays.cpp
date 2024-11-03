class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.rbegin(), nums2.rend());
        int total(0);
        for(int p = 0; p < nums1.size(); p++){total += nums1[p] * nums2[p];}
        return total;
    }
};
