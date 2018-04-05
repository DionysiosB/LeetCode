class Solution{
    public:
        std::vector<int> intersect(std::vector<int> nums1, std::vector<int> nums2){

            std::map<int, int> common;
            for(size_t p = 0; p < nums1.size(); p++){
                if(common.count(nums1[p]) <= 0){common[nums1[p]] = 0;}
                ++common[nums1[p]];
            }

            std::vector<int> res;
            for(size_t p = 0; p < nums2.size(); p++){
                if(common.count(nums2[p]) <= 0){continue;}
                res.push_back(nums2[p]);
                --common[nums2[p]];
                if(common[nums2[p]] == 0){common.erase(nums2[p]);}
            }

            return res;
        }
};
