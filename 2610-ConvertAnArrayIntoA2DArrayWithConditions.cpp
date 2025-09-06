class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        std::vector<int> vc(201, 0);
        int nr(0); for(int p = 0; p < nums.size(); p++){++vc[nums[p]]; nr = (nr > vc[nums[p]] ? nr : vc[nums[p]]);}
        std::vector<std::vector<int> > v(nr);
        for(int p = 0; p < vc.size(); p++){
            for(int u = 0; u < vc[p]; u++){v[u].push_back(p);}
        }

        return v;
    }
};
