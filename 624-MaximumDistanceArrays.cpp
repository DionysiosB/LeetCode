class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {

        const int n = arrays.size();
        int fmnv(1e5), smnv(1e5), fmni(-1), smni(-1), fmxv(-1e5), smxv(-1e5), fmxi(-1), smxi(-1);
        for(int p = 0; p < n; p++){
            if(arrays[p][0] <= fmnv){
                smnv = fmnv; smni = fmni;
                fmnv = arrays[p][0]; fmni = p;
            }
            else if(arrays[p][0] < smnv){smnv = arrays[p][0]; smni = p;}

            if(arrays[p].back() >= fmxv){
                smxv = fmxv; smxi = fmxi;
                fmxv = arrays[p].back(); fmxi = p;
            }
            else if(arrays[p][0] > smxv){smxv = arrays[p].back(); smxi = p;}
        }

        int res(0);
        if(fmxi == fmni){
            int tsta = std::abs(fmxv - smnv);
            int tstb = std::abs(smxv - fmnv);
            res = std::max(tsta, tstb);
        }
        else{res = std::abs(fmxv - fmnv);}
        return res;        
    }
};
