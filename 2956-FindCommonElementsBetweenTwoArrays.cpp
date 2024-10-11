class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        std::set<int> sa, sb;
        int cnta(0), cntb(0);
        for(int p = 0; p < nums1.size(); p++){sa.insert(nums1[p]);}
        for(int p = 0; p < nums2.size(); p++){sb.insert(nums2[p]);}
        for(int p = 0; p < nums1.size(); p++){cnta += sb.count(nums1[p]);}
        for(int p = 0; p < nums2.size(); p++){cntb += sa.count(nums2[p]);}
        return std::vector<int>{cnta, cntb};
    }
};
