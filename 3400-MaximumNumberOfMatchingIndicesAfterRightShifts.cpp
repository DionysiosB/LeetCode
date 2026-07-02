class Solution {
public:
    int maximumMatchingIndices(vector<int>& nums1, vector<int>& nums2) {

        size_t n = nums1.size();
        std::map<int, std::vector<int> > m;
        for(int p = 0; p < nums2.size(); p++){m[nums2[p]].push_back(p);}

        std::vector<int> sv(n, 0);
        for(int p = 0; p < n; p++){
            const int x = nums1[p];
            if(!m.count(x)){continue;}
            for(int u = 0; u < m[x].size(); u++){++sv[(2 * n + p - m[x][u]) % n];}
        }

        int mxcnt(0);
        for(int p = 0; p < n; p++){mxcnt = std::max(mxcnt, sv[p]);}
        return mxcnt;
    }
};
