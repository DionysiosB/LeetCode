class Solution{
    public:
        std::vector<int> intersection(std::vector<int> nums1, std::vector<int> nums2){
            std::set<int> s1;
            for(int p = 0; p < nums1.size(); p++){s1.insert(nums1[p]);}
            std::set<int> s2;
            for(int p = 0; p < nums2.size(); p++){s2.insert(nums2[p]);}

            std::vector<int> ans;
            for(std::set<int>::iterator setIter = s1.begin(); setIter != s1.end(); setIter++){
                int num = *setIter;
                if(s2.count(num) > 0){ans.push_back(num);}
            }

            return ans;
        }
};
