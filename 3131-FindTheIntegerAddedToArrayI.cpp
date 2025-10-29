class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        long n = nums1.size(); long long s(0);
        for(long p = 0; p < n; p++){s -= nums1[p];}
        for(long p = 0; p < n; p++){s += nums2[p];}
        return (s / n);
    }
};
