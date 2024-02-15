class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        std::vector<int> res;
        long a(0), b(0);
        while(a < m || b < n){
            if(a == m){res.push_back(nums2[b++]);}
            else if(b == n){res.push_back(nums1[a++]);}
            else if(nums1[a] <= nums2[b]){res.push_back(nums1[a++]);}
            else if(nums1[a] >  nums2[b]){res.push_back(nums2[b++]);}
        }

        nums1 = res;
    }
};
