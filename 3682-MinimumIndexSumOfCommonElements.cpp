class Solution {
public:
    int minimumSum(vector<int>& nums1, vector<int>& nums2) {

        std::map<int, int> mpa;
        for(int p = 0; p < nums1.size(); p++){
            if(mpa.count(nums1[p])){continue;}
            mpa[nums1[p]] = p;
        }

        int ans(-1);
        for(int p = 0; p < nums2.size(); p++){
            if(!mpa.count(nums2[p])){continue;}
            int tst = p + mpa[nums2[p]];
            if(ans < 0 || tst < ans){ans = tst;}
        }

        return ans;
    }
};
