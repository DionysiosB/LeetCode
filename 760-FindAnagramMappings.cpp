class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        std::vector<std::pair<int, int> > va(n), vb(n);
        for(int p = 0; p < n; p++){va[p] = std::make_pair(nums1[p] , p);}
        for(int p = 0; p < n; p++){vb[p] = std::make_pair(nums2[p] , p);}
        sort(va.begin(), va.end());
        sort(vb.begin(), vb.end());
        
        std::vector<int> res(n);
        for(int p = 0; p < n; p++){res[va[p].second] = vb[p].second;}
        return res;
    }
};
