class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {

        std::vector<int> first(7, 0), second(7,0);
        int sa(0), sb(0);
        for(int p = 0; p < nums1.size(); p++){++first[nums1[p]]; sa += nums1[p];}
        for(int p = 0; p < nums2.size(); p++){++second[nums2[p]]; sb += nums2[p];}

        if(sa > sb){std::vector<int> third = first; first = second; second = third;}
        int diff(sa > sb ? (sa - sb) : (sb - sa)), cnt(0);
        for(int p = 1; p <= 5; p++){
            int total = first[p] + second[7 - p];
            int v = 6 - p;
            if(total * v >= diff){cnt += (diff + v - 1) / v; diff = 0; break;}
            else{cnt += total; diff -= total * v;}
        }

        if(diff <= 0){return cnt;}
        else{return -1;}
    }
}
