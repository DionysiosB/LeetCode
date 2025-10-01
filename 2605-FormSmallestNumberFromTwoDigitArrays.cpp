class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int both(999), minA(10), minB(10);
        std::set<int> s;
        for(int p = 0; p < nums1.size(); p++){
            minA = (minA < nums1[p] ? minA : nums1[p]);
            s.insert(nums1[p]);
        }
        for(int p = 0; p < nums2.size(); p++){
            if(s.count(nums2[p])){both = (both < nums2[p] ? both : nums2[p]);}
            minB = (minB < nums2[p] ? minB : nums2[p]);
        }

        if(both < 10){return both;}
        else if(minA < minB){return 10 * minA + minB;}
        else if(minA > minB){return 10 * minB + minA;}
        return 0;
    }
};
