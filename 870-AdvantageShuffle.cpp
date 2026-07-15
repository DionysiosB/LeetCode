class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {

        std::vector<std::pair<int, int> > vb(nums2.size());
        for(size_t p = 0; p < vb.size(); p++){vb[p].first = nums2[p]; vb[p].second = p;}
        sort(vb.begin(), vb.end());

        sort(nums1.begin(), nums1.end());
        std::vector<int> res(nums1.size(), -1);
        
        int idx(0);
        std::multiset<int> ms;
        for(size_t p = 0; p < nums2.size(); p++){
            int val = vb[p].first;
            int pos = vb[p].second;
            while(idx < nums1.size() && nums1[idx] <= val){ms.insert(nums1[idx]); ++idx;}
            if(idx >= nums1.size()){break;}
            res[pos] = nums1[idx++];
        }

        for(size_t p = 0; p < res.size(); p++){
            if(res[p] > 0){continue;}
            res[p] = *ms.begin();
            ms.erase(ms.begin());
        }

        return res;
    }
};
