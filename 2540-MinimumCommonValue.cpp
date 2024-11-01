class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int a(0), b(0);
        while(a < nums1.size() || b < nums2.size()){
            if((b == nums2.size()) || (a < nums1.size() && nums1[a] < nums2[b])){++a;}
            else if((a == nums1.size()) || (b < nums2.size() && nums2[b] < nums1[a])){++b;}
            else if(nums1[a] == nums2[b]){return nums1[a];}
        }

        return -1;
    }
}
