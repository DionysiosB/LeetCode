class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {

        int sa(0); for(int p = 0; p < nums1.size(); p++){sa += nums1[p];}
        int sb(0); for(int p = 0; p < nums2.size(); p++){sb += nums2[p];}

        std::vector<int> small(sa < sb ? nums1 : nums2);
        std::vector<int> large(sa < sb ? nums2 : nums1);
        int sumA(sa < sb ? sa : sb), sumB(sa < sb ? sb : sa);
        sort(small.begin(), small.end());
        sort(large.rbegin(), large.rend());

        int idxA(0), idxB(0), cnt(0);
        while(sumA < sumB){
            int diffA = (idxA < small.size()) ? (6 - small[idxA]) : -1;
            int diffB = (idxB < large.size()) ? (large[idxB] - 1) : -1;
            if(diffA < 0 && diffB < 0){break;}
            if(diffA > diffB){sumA += diffA; ++idxA; ++cnt;}
            else{sumB -= diffB; ++idxB; ++cnt;}
        }

        if(sumA >= sumB){return cnt;}
        else{return -1;}
    }
};
