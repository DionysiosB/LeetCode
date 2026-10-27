class Solution {
public:
    int trap(vector<int>& height) {

        const int n = height.size();
        std::vector<int> mxr(n, height.back());
        for(int p = n - 2; p >= 0; p--){mxr[p] = std::max(mxr[p + 1], height[p]);}
        int total(0), mxl(height[0]);
        for(int p = 1; p + 1 < n; p++){
            total += std::max(std::min(mxl, mxr[p + 1]) - height[p], 0);
            mxl = std::max(mxl, height[p]);
        }

        return total;
    }
};
