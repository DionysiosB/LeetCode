class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        std::map<int, int> m;
        for(int p = 0; p < nums1.size(); p++){m[nums1[p][0]] += nums1[p][1];}
        for(int p = 0; p < nums2.size(); p++){m[nums2[p][0]] += nums2[p][1];}
        
        std::vector<std::vector<int> > v;
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int key = it->first;
            int val = it->second;
            std::vector<int> w({key, val});
            v.push_back(w);
        }
        
        return v;
    }
};
