class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        const int m = r.size();
        std::vector<bool> v(m, true);
        for(int q = 0; q < m; q++){
            int left = l[q]; int right = r[q];
            std::vector<int> w; for(int u = left; u <= right; u++){w.push_back(nums[u]);}
            sort(w.begin(), w.end());
            bool cur(true);
            for(int u = 1; cur && u < w.size(); u++){if(w[1] - w[0] != w[u] - w[u - 1]){cur = false;}}
            v[q] = cur;
        }

        return v;
    }
};
