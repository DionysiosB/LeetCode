class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {

        const int n = nums.size();
        std::vector<int> lv(nums), rv(nums);
        for(int p = 1; p < n; p++){lv[p] += lv[p - 1];}
        for(int p = n - 2; p >= 0; p--){rv[p] += rv[p + 1];}

        std::vector<int> flv(n, -1e9), slv(n, -1e9);
        for(int p = 0; p < n; p++){
            if(p + 1 >= firstLen){flv[p] = lv[p] - (p >= firstLen ? lv[p - firstLen] : 0);}
            if(p + 1 >= secondLen){slv[p] = lv[p] - (p >= secondLen ? lv[p - secondLen] : 0);}
            flv[p] = std::max(flv[p], p ? flv[p - 1] : 0);
            slv[p] = std::max(slv[p], p ? slv[p - 1] : 0);

        }

        std::vector<int> frv(n, -1e9), srv(n, -1e9);
        for(int p = n - 1; p >= 0; p--){
            if(p + firstLen  <= n){frv[p] = rv[p] - (p + firstLen  < n ? rv[p + firstLen]  : 0);}
            if(p + secondLen <= n){srv[p] = rv[p] - (p + secondLen < n ? rv[p + secondLen] : 0);}
            frv[p] = std::max(frv[p], p + 1 < n ? frv[p + 1] : 0);
            srv[p] = std::max(srv[p], p + 1 < n ? srv[p + 1] : 0);
        }

        int mxs(0);
        for(int p = 1; p < n; p++){
            mxs = std::max(mxs, std::max(flv[p - 1] + srv[p], slv[p - 1] + frv[p]));
        }

        return mxs;
    }
};
