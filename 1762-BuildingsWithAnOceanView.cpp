class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        std::vector<int> v; int mx(0);
        for(int p = heights.size() - 1; p >= 0; p--){
            if(heights[p] > mx){mx = heights[p]; v.push_back(p);}
        }
        
        std::reverse(v.begin(), v.end());
        return v;
        
    }
};
