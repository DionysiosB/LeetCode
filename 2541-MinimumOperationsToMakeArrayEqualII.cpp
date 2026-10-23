class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {

        long long pos(0), total(0);
        for(int p = 0; p < nums1.size(); p++){
            int diff = nums1[p] - nums2[p];
            if(!k){if(diff){return -1;}; continue;}
            if(diff % k){return -1;}
            diff /= k;
            total += diff;
            pos += (diff > 0 ? diff : 0);
        }

        return total ? -1 : pos;
    }
};
