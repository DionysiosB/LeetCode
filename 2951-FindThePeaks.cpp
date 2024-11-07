class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        std::vector<int> res;
        for(int p = 1; p + 1 < mountain.size(); p++){
            if(mountain[p - 1] < mountain[p] && mountain[p] > mountain[p + 1]){res.push_back(p);}
        }

        return res;
    }
}
