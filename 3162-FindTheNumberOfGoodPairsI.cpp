class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        int cnt(0);
        for(int p = 0; p < nums1.size(); p++){
            if(nums1[p] % k){continue;}
            for(long q = 0; q < nums2.size(); q++){
                cnt += (nums1[p] % (k * nums2[q]) == 0);
            }
        }

        return cnt;
        
    }
};
