class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        std::set<int> bc; int sa(0), sb(0);
        for(int p = 0; p < bobSizes.size(); p++){sb += bobSizes[p]; bc.insert(bobSizes[p]);}
        for(int p = 0; p < aliceSizes.size(); p++){sa += aliceSizes[p];}
        int diff = (sb - sa) / 2;
        std::vector<int> res;
        for(int p = 0; p < aliceSizes.size(); p++){
            int target = aliceSizes[p] + diff;
            if(bc.count(target)){res.push_back(aliceSizes[p]); res.push_back(target); return res;}
        }
        return res;
    }
};
