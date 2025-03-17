class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        std::map<int, int> ma, mb;
        for(int p = 0;  p < nums1.size(); p++){
            for(int q = 0; q < nums2.size(); q++){
                ++ma[nums1[p] + nums2[q]];
            }
        }
        
        for(int p = 0;  p < nums3.size(); p++){
            for(int q = 0; q < nums4.size(); q++){
                ++mb[nums3[p] + nums4[q]];
            }
        }
        
        int cnt(0);
        for(std::map<int, int>::iterator it = ma.begin(); it != ma.end(); it++){
            int key = it->first;
            int val = it->second;
            if(mb.count(-key)){cnt += val * mb[-key];}
        }
        
        return cnt;
    }
};
