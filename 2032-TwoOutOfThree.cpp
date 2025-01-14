class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        std::set<int> s1; for(int p = 0; p < nums1.size(); p++){s1.insert(nums1[p]);}
        std::set<int> s2; for(int p = 0; p < nums2.size(); p++){s2.insert(nums2[p]);}
        std::set<int> s3; for(int p = 0; p < nums3.size(); p++){s3.insert(nums3[p]);}

        std::set<int> st(s1);
        for(std::set<int>::iterator it = s2.begin(); it != s2.end(); it++){st.insert(*it);}
        for(std::set<int>::iterator it = s3.begin(); it != s3.end(); it++){st.insert(*it);}

        std::vector<int> v;
        for(std::set<int>::iterator it = st.begin(); it != st.end(); it++){
            int val = *it;
            if(s1.count(val) + s2.count(val) + s3.count(val) >= 2){v.push_back(val);}
        }

        return v;
        
    }
};
