class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {

        std::vector<int> v;
        for(int p = 1; p < height.size(); p++){
            if(threshold < height[p - 1]){v.push_back(p);}
        }

        return v;
    }
};
