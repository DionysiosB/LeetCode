class Solution {
public:
    int widestPairOfIndices(vector<int>& nums1, vector<int>& nums2) {

        size_t n = nums1.size();
        std::vector<int> v(n, 0);
        for(int p = 0; p < n; p++){v[p] = nums1[p] - nums2[p];}

        std::map<int, int> m; m[0] = -1;
        int cs(0), res(0);
        for(int p = 0; p < n; p++){
            cs += v[p];
            if(m.count(cs)){
                int len = p - m[cs];
                res = std::max(res, len);
            }
            else{m[cs] = p;}
        }

        return res;
    }
};
