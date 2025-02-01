class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::set<int> sa, sb;
        std::vector<std::set<int> > vs(2);
        for(int p = 0; p < nums1.size(); p++){sa.insert(nums1[p]);}
        for(int p = 0; p < nums2.size(); p++){sb.insert(nums2[p]);}
        for(int p = 0; p < nums1.size(); p++){if(!sb.count(nums1[p])){vs[0].insert(nums1[p]);}}
        for(int p = 0; p < nums2.size(); p++){if(!sa.count(nums2[p])){vs[1].insert(nums2[p]);}}
        
        std::vector<std::vector<int> > v(2);
        for(std::set<int>::iterator it = vs[0].begin(); it != vs[0].end(); ++it){v[0].push_back(*it);}
        for(std::set<int>::iterator it = vs[1].begin(); it != vs[1].end(); ++it){v[1].push_back(*it);}
        return v;
    }
};
